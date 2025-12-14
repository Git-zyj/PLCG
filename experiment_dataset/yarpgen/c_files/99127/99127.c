/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((max(62827, (-9223372036854775807 - 1))), ((((max(var_2, var_1))) ? -4804636357344815946 : -var_8))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [4] = min(((((((9223372036854775807 ? 1842903651 : (arr_1 [i_0])))) || (min((arr_1 [7]), (arr_1 [i_0])))))), (-633049209 - 65531));
        var_16 = (max((max((max(-9223372036854775807, 16126460620765176897)), (((!(arr_1 [i_0])))))), ((min((max(-633049204, (arr_0 [i_0] [i_0]))), 65506)))));
        var_17 = ((~((((4804636357344815946 | (arr_1 [5]))) & (((~(arr_1 [i_0]))))))));
        var_18 = (min(4242136785, -7651692579283045696));
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        var_19 -= (max(62, ((((arr_3 [i_1 - 2]) || (arr_3 [i_1 - 1]))))));
        arr_5 [i_1] = ((((-24286 ? 18227484987157801678 : 4242136785)) + ((max((max(-7, (arr_3 [6]))), (((arr_4 [i_1]) + (arr_4 [i_1]))))))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_20 = ((((max((arr_6 [i_2] [i_2]), (arr_6 [i_2] [i_2])))) >= ((max((min((arr_0 [14] [i_2]), 65519)), ((max(1, -85))))))));
        arr_8 [i_2] = (max((min((arr_0 [i_2] [i_2]), (arr_3 [i_2]))), (min((arr_0 [i_2] [i_2]), (arr_3 [i_2])))));
        var_21 |= (min((max(7888863882388747320, (min(5, 15568077809046812910)))), 75));
    }
    #pragma endscop
}
