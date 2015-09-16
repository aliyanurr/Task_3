void insertafter(list *l, address p, address s)
{
    address Q;
    Q=(*l).awal;
    while (info(Q).ids!=info(s).ids)
    {
        Q=next(Q);
    }
    next(p)=NULL;
    next(p)=next(Q);
    next(Q)=p;

}
void deleteafter(list *l, address *p, address s)
{
    address Q,P;
    P=(*l).awal;
    while(info(P).ids!=info(s).ids)
    {
        P=next(P);
    }
    Q=next(P);
    next(P)=next(Q);
    next(Q)=NULL;
    delete Q;

}
