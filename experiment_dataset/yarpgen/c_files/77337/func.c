/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77337
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (-(267604876U)));
        var_18 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)123)) / (((/* implicit */int) arr_0 [i_0] [i_0]))));
        /* LoopNest 3 */
        for (long long int i_1 = 4; i_1 < 16; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                for (int i_3 = 3; i_3 < 16; i_3 += 1) 
                {
                    {
                        arr_11 [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) var_15);
                        var_19 += ((/* implicit */unsigned long long int) arr_7 [(unsigned short)4] [i_1] [i_2] [i_1]);
                        var_20 = ((/* implicit */unsigned short) (((~(3961455323U))) < (((/* implicit */unsigned int) ((/* implicit */int) (short)29756)))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 3) /* same iter space */
    {
        var_21 ^= ((/* implicit */unsigned long long int) ((-2101703490) * (((/* implicit */int) ((((/* implicit */_Bool) ((2247401767174144ULL) % (((/* implicit */unsigned long long int) -2101703495))))) && (((/* implicit */_Bool) 16252505816123476359ULL)))))));
        var_22 &= ((/* implicit */unsigned long long int) var_6);
    }
    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-((-(((/* implicit */int) (short)-26596))))))) / (((((/* implicit */_Bool) arr_5 [i_5] [i_5] [i_5])) ? (arr_6 [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-1)) || (((/* implicit */_Bool) 2640459110986399158ULL))))))))));
        arr_19 [i_5] = max((((arr_6 [i_5] [i_5]) - (arr_6 [i_5] [i_5]))), (((/* implicit */long long int) max((arr_1 [i_5] [i_5]), (arr_1 [i_5] [i_5])))));
    }
    var_24 ^= ((/* implicit */short) (((!(((/* implicit */_Bool) (signed char)100)))) ? (((/* implicit */int) min(((short)-11139), ((short)-28407)))) : (var_0)));
}
