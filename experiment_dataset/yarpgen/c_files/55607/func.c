/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55607
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
    var_12 = ((/* implicit */short) (~(((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        {
                            arr_12 [0] [i_2] [i_1] [i_0 - 3] [14] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 - 3] [i_0 - 3] [i_0 - 3])) ? (((/* implicit */unsigned int) max((((/* implicit */int) var_1)), (var_5)))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [17ULL] [i_1] [14]))) % (2808589974U)))))) ? (arr_0 [(_Bool)1] [i_1]) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_1 [i_0] [(_Bool)1])))))))));
                            var_13 = ((/* implicit */long long int) 2808589991U);
                        }
                    } 
                } 
                var_14 = ((/* implicit */_Bool) ((int) (((!(((/* implicit */_Bool) var_4)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (var_6) : (((/* implicit */int) var_1))))))));
                /* LoopNest 3 */
                for (short i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    for (unsigned short i_5 = 3; i_5 < 14; i_5 += 3) 
                    {
                        for (signed char i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) max((((((((/* implicit */int) arr_16 [i_4])) + (2147483647))) << (((((min((var_3), (var_6))) + (1702064290))) - (9))))), (((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_4] [i_5] [10LL]))));
                                arr_23 [i_6] [(_Bool)1] [i_0] [i_0] [i_4] [i_6] = ((/* implicit */unsigned long long int) arr_18 [i_0 - 3] [16LL] [16LL] [i_4]);
                                arr_24 [i_4] = ((/* implicit */unsigned short) max((max((var_3), (var_3))), (((((/* implicit */_Bool) ((long long int) arr_17 [(short)9] [i_0] [(unsigned char)5] [i_4] [i_1] [i_0]))) ? (((/* implicit */int) arr_2 [i_0 - 2])) : (((int) arr_18 [(_Bool)1] [i_1] [i_4] [i_4]))))));
                                arr_25 [i_4] = ((/* implicit */short) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)0)) : (-1652547373))), (-1)));
                                var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */int) (+(((((14830848073124158926ULL) & (14830848073124158951ULL))) + (((/* implicit */unsigned long long int) ((-1) & (((/* implicit */int) var_10)))))))));
            }
        } 
    } 
}
