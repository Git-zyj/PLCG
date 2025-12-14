/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84830
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            arr_9 [i_1] [i_0] = max((((/* implicit */unsigned long long int) ((1262950164) <= (((/* implicit */int) (_Bool)1))))), (5427408142212511747ULL));
                            var_11 = var_1;
                            var_12 = ((/* implicit */unsigned long long int) ((((max((arr_6 [i_1] [i_1] [i_1]), (((/* implicit */int) (signed char)29)))) | (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)52040)) : (-2052845555))))) >> (((max((min((((/* implicit */unsigned long long int) var_5)), (var_3))), (((/* implicit */unsigned long long int) ((arr_3 [i_0]) >> (((var_1) - (6478770868329923742ULL)))))))) - (655549ULL)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        {
                            var_13 = arr_14 [i_1];
                            arr_15 [i_5] [i_5] [i_1] [i_1] [i_1 + 3] [i_0] = -1262950178;
                            arr_16 [i_0] [i_1] [i_4] [i_5] [i_4] [i_4] = min((((/* implicit */unsigned long long int) var_8)), (max((((arr_10 [i_0] [i_5] [i_4] [i_5]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [0ULL] [i_1]))) : (arr_8 [i_1 - 1] [i_1 + 3] [i_4] [i_5]))), (min((var_9), (((/* implicit */unsigned long long int) var_5)))))));
                            var_14 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) >> (((((unsigned long long int) var_7)) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_0 [i_4] [i_0]))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 23; i_6 += 3) 
                {
                    for (int i_7 = 0; i_7 < 23; i_7 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned long long int) max((var_15), (min((((/* implicit */unsigned long long int) min((((/* implicit */int) ((signed char) var_10))), ((-(var_10)))))), (max((min((arr_14 [11]), (var_3))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10)))))))))));
                            arr_22 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */int) ((_Bool) (((!(((/* implicit */_Bool) arr_3 [i_1])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)52435)), (arr_6 [i_1] [i_1 + 1] [i_6])))) : (max((arr_13 [i_7]), (((/* implicit */unsigned long long int) var_0)))))));
                            var_16 ^= ((/* implicit */int) arr_7 [i_0] [6] [i_6] [i_7]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_8 = 1; i_8 < 20; i_8 += 1) 
    {
        for (int i_9 = 3; i_9 < 21; i_9 += 1) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 19; i_11 += 4) 
                    {
                        for (signed char i_12 = 2; i_12 < 22; i_12 += 1) 
                        {
                            {
                                var_17 |= ((/* implicit */unsigned long long int) (_Bool)1);
                                var_18 += ((/* implicit */signed char) ((unsigned long long int) (-((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_3))))));
                                var_19 = ((/* implicit */signed char) ((_Bool) max((arr_4 [i_8] [i_9 + 1]), (((/* implicit */unsigned long long int) var_10)))));
                                var_20 ^= ((/* implicit */unsigned long long int) arr_25 [i_10] [i_10]);
                                arr_37 [i_12 - 1] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_8])) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_7)) != (((/* implicit */int) (unsigned short)880)))))) : (((/* implicit */int) (unsigned short)8333))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_13 = 1; i_13 < 21; i_13 += 3) 
                    {
                        for (unsigned short i_14 = 0; i_14 < 23; i_14 += 2) 
                        {
                            {
                                var_21 += ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) ((arr_12 [i_13 - 1] [i_14]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4)))))))));
                                var_22 *= ((/* implicit */signed char) var_9);
                                var_23 = ((((/* implicit */_Bool) ((unsigned short) var_2))) ? (((unsigned long long int) ((((/* implicit */_Bool) 17249574859189460379ULL)) || (((/* implicit */_Bool) (-2147483647 - 1)))))) : ((+(min((var_3), (arr_33 [i_8 - 1] [i_8 - 1] [i_10] [i_13 + 2] [i_14] [(signed char)10]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
