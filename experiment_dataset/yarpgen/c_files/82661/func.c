/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82661
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
    var_15 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) / (max((4332524825654997310ULL), (((/* implicit */unsigned long long int) var_11))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((int) 4332524825654997328ULL)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((var_3), (((/* implicit */int) var_0)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) <= (((/* implicit */int) arr_0 [i_0] [i_0]))));
        arr_3 [i_0] = ((/* implicit */int) 14114219248054554267ULL);
    }
    /* LoopNest 2 */
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        for (int i_2 = 3; i_2 < 16; i_2 += 3) 
        {
            {
                arr_8 [i_2] = ((/* implicit */signed char) ((int) max((var_5), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (5436567314694747835LL))))));
                /* LoopNest 3 */
                for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    for (int i_4 = 0; i_4 < 17; i_4 += 3) 
                    {
                        for (int i_5 = 0; i_5 < 17; i_5 += 3) 
                        {
                            {
                                var_16 += ((/* implicit */_Bool) arr_13 [i_1] [i_3]);
                                var_17 = var_9;
                            }
                        } 
                    } 
                } 
                arr_18 [i_1] [i_2] = ((/* implicit */int) max((((/* implicit */long long int) max((((/* implicit */int) arr_4 [i_2 - 2])), (min((((/* implicit */int) var_4)), (-2091435110)))))), (((((/* implicit */_Bool) var_6)) ? (var_12) : (((/* implicit */long long int) 0))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) var_4)) ? (var_3) : (var_3)))))));
}
