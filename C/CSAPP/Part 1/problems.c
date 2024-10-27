//  Suppose you work as a truck driver, and you have been hired to carry a load of
//  potatoes from Boise, Idaho, to Minneapolis, Minnesota, a total distance of 2,500
//  kilometers. You estimate you can average 100 km/hr driving within the speed
//  limits, requiring a total of 25 hours for the trip.

// A.YouhearonthenewsthatMontanahasjustabolisheditsspeedlimit,which
//  constitutes,1500kmofthetrip.Yourtruckcantravelat150km/hr.What
//  willbeyourspeedupforthetrip?
//  B. Youcanbuyanewturbochargerforyourtruckatwww.fasttrucks.com.They
//  stockavarietyofmodels,butthefasteryouwanttogo,themoreitwillcost.
//  Howfastmustyoutravel throughMontanatogetanoverallspeedupfor
//  yourtripof1.67×

//  Acarmanufacturingcompanyhaspromisedtheircustomersthatthenextrelease
//  ofanewenginewill showa4×performanceimprovement.Youhavebeenas
// signedthetaskofdeliveringonthatpromise.Youhavedeterminedthatonly90%
//  oftheenginecanbeimproved.Howmuch(i.e.,whatvalueofk)wouldyouneed
//  toimprovethisparttomeettheoverallperformancetargetoftheengine?

#include <stdio.h>

int main()
{
    double totalDistanceKM = 2500;
    double avgSpeedKMH = 100;
    double montanaDistanceKM = 1500;
    double speedMontanaKMH = 150;
    double truckIncreasePercent = 1.67;

    double speedUpAPercent = (totalDistanceKM/avgSpeedKMH) / ((montanaDistanceKM/speedMontanaKMH) + ((totalDistanceKM-montanaDistanceKM)/avgSpeedKMH)) * 100 - 100;
    printf("%f", speedUpAPercent);
    printf(" \n");
    double normalTravelTimeH = totalDistanceKM/avgSpeedKMH;
    double newTravelTimeH = normalTravelTimeH * 0.67;
    double remainingTravelH = (totalDistanceKM - montanaDistanceKM) / avgSpeedKMH;
    //printf("%f", newTravelTimeH);
    double expMontanaTimeH = newTravelTimeH - remainingTravelH;
    //printf("%f", expMontanaTimeH);
    double speedUpBKMH = montanaDistanceKM / (expMontanaTimeH);
    printf("%f", speedUpBKMH);
    printf(" \n");
    double amdhal = 3.6 / 0.6;
    printf("%f", amdhal);
    return 0;
}
