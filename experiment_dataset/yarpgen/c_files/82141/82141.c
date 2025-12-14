/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (1 < 6420307850687509276);
    var_13 = (var_9 ? ((((min(1229957628, var_5))))) : (max(var_0, ((var_9 ? var_5 : 6420307850687509276)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_14 = 58174;

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_7 [i_1] = ((((max(-7365, (((!(arr_1 [i_1]))))))) + (min(var_10, ((max((arr_2 [i_1]), var_8)))))));
            var_15 *= (max(((min(((91 / (arr_2 [i_0]))), -6420307850687509267))), 17949256510127025975));
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_12 [i_0] [i_2] [i_0] |= (!7366);
            var_16 |= (((max((~var_4), (max(var_9, 1449312911768354781)))) == (((((min(-491, 3952140236525030356))) ? (arr_11 [i_2]) : -3952140236525030376)))));
        }
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            arr_15 [i_0] [i_3 - 1] [i_3] = ((58166 ? 29 : 39169));
            var_17 = (max((((-(var_11 && -816482649)))), (~328917366)));
            arr_16 [i_3] = 9977;
        }
        var_18 = (min(var_18, (((var_3 - (((!(((169 ? 3 : -3531432204927229001)))))))))));
    }
    #pragma endscop
}
