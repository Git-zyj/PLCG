/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60696
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
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 14; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */_Bool) max((min((var_10), (((/* implicit */long long int) var_11)))), (((/* implicit */long long int) var_3))));
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (signed char i_3 = 2; i_3 < 13; i_3 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            var_13 = ((/* implicit */unsigned char) max(((-(var_10))), (((/* implicit */long long int) (-(((/* implicit */int) var_3)))))));
                            arr_12 [i_0] [i_0] [i_2] [i_2] [i_2] = ((/* implicit */short) max(((-(var_9))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9)))))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 15; i_5 += 2) 
                        {
                            var_14 = ((/* implicit */unsigned int) var_11);
                            arr_15 [i_0] [i_0] [i_2] [i_3 - 1] [i_5] = ((/* implicit */unsigned char) (~((-(var_10)))));
                            var_15 = ((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) var_4))));
                            arr_16 [i_0] = ((/* implicit */short) (+((-(max((var_10), (((/* implicit */long long int) var_11))))))));
                        }
                        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (!(((/* implicit */_Bool) var_12)))))));
                        var_17 ^= ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) var_2))))));
                    }
                } 
            } 
        } 
    }
    for (int i_6 = 2; i_6 < 14; i_6 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */_Bool) (~((-(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
        arr_19 [i_6] [i_6] = ((/* implicit */unsigned short) var_2);
        var_19 = ((/* implicit */long long int) var_5);
        /* LoopSeq 1 */
        for (unsigned long long int i_7 = 2; i_7 < 13; i_7 += 4) 
        {
            var_20 = ((/* implicit */long long int) max((var_20), (min((((/* implicit */long long int) (~(((/* implicit */int) var_1))))), ((-(min((var_10), (((/* implicit */long long int) var_4))))))))));
            arr_24 [i_6] [i_6] = ((/* implicit */int) var_6);
        }
    }
    var_21 = ((/* implicit */signed char) (+((+(((/* implicit */int) max((var_4), (var_6))))))));
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 14; i_8 += 1) 
    {
        for (unsigned short i_9 = 0; i_9 < 14; i_9 += 1) 
        {
            {
                arr_30 [i_8] [i_8] = ((/* implicit */short) min(((~(((/* implicit */int) var_1)))), (((/* implicit */int) var_12))));
                var_22 = ((/* implicit */unsigned int) min((((/* implicit */short) (!(((/* implicit */_Bool) var_11))))), (var_4)));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) (+(((/* implicit */int) max((var_11), (((/* implicit */unsigned short) var_2)))))));
}
