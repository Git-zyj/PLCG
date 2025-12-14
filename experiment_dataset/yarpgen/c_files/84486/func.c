/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84486
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) max((var_18), ((~(var_8)))));
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) -4373519808467490401LL))) | (((((/* implicit */_Bool) -4373519808467490401LL)) ? (((/* implicit */int) (unsigned short)1115)) : (((/* implicit */int) (signed char)67))))))), (arr_0 [i_0 + 1]))))));
    }
    var_20 = var_8;
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 11; i_1 += 2) 
    {
        for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            {
                arr_7 [8] [(_Bool)1] [i_2] = arr_4 [i_2];
                arr_8 [i_1] [i_1 - 1] = ((/* implicit */unsigned long long int) var_7);
                var_21 = (signed char)-68;
                var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_6 [(signed char)9] [(signed char)9] [(signed char)9])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-7420))))) : (var_12))))));
                /* LoopSeq 2 */
                for (long long int i_3 = 0; i_3 < 13; i_3 += 1) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned long long int) 304545589U);
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 13; i_4 += 1) 
                    {
                        for (signed char i_5 = 3; i_5 < 12; i_5 += 2) 
                        {
                            {
                                var_24 += ((/* implicit */int) ((unsigned char) (+(max((((/* implicit */unsigned int) arr_11 [i_1] [i_2] [i_3] [i_4] [i_5 - 2])), (arr_6 [i_1] [(unsigned char)12] [(unsigned short)10]))))));
                                var_25 = ((/* implicit */_Bool) 4373519808467490401LL);
                                arr_15 [i_5] [i_4] [i_4] [i_4] [i_4] [i_2] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) arr_12 [i_1 + 1] [i_4])))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 2147475456)) > (var_11)))), ((~(arr_3 [i_1])))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) 4373519808467490408LL))))))) : (((int) (_Bool)0))));
                }
                for (long long int i_6 = 0; i_6 < 13; i_6 += 1) /* same iter space */
                {
                    arr_18 [i_6] [i_6] [i_2] [i_1] = ((/* implicit */unsigned int) var_10);
                    var_27 += ((/* implicit */signed char) 1355063139);
                }
            }
        } 
    } 
}
