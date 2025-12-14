/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77023
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
    var_16 -= (unsigned short)20756;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)33433))))) - (arr_3 [i_1 + 1] [(unsigned short)12]))) >> (((/* implicit */int) (unsigned short)0))));
                var_18 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_4 [i_1 - 1] [i_1 + 1]), (arr_4 [i_1 + 2] [i_1 + 2]))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 2; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) min(((-(((/* implicit */int) var_7)))), ((~(((/* implicit */int) min((((/* implicit */short) var_2)), (var_1))))))));
                            arr_11 [i_0] [i_0] [i_3] = ((/* implicit */_Bool) min((var_10), ((-(max((((/* implicit */long long int) 1613948719)), (27021597764222976LL)))))));
                            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((+(((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) arr_1 [i_0]))))) ? ((-(8568692603062775538LL))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                            var_21 &= arr_7 [i_1 - 1];
                            var_22 = ((/* implicit */_Bool) var_4);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_17 [i_0] [i_1] [i_4] [i_5] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_2)) ? (287732051U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-27456)))))))), (18446744073709551604ULL)));
                            var_23 -= ((/* implicit */int) min((((/* implicit */unsigned long long int) 1688849860263936LL)), ((~(((arr_13 [i_0] [i_0] [i_4]) << (((((/* implicit */int) var_13)) - (116)))))))));
                            var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_15 [i_4]))));
                            var_25 -= ((/* implicit */unsigned int) arr_2 [i_1]);
                            arr_18 [i_1] = ((/* implicit */unsigned long long int) (((((+(((/* implicit */int) var_1)))) <= (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) var_5)))))) ? (arr_2 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_0])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */short) ((((/* implicit */long long int) min((((/* implicit */int) var_9)), (var_14)))) == (var_4)));
}
