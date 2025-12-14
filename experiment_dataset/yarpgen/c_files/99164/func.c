/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99164
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
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */_Bool) (+(min((((/* implicit */long long int) var_5)), (var_2)))));
                    arr_6 [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-2))) | (var_0)))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */_Bool) max((((/* implicit */int) (!((!(((/* implicit */_Bool) var_4))))))), ((-(1922644360)))));
                                var_12 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_0))))));
                                var_13 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */long long int) -1069100954)) > (-8337690727069856522LL)))))))));
                                var_14 = ((/* implicit */long long int) (short)-2);
                            }
                        } 
                    } 
                    var_15 |= ((/* implicit */unsigned char) var_1);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) var_1);
    var_17 = ((/* implicit */unsigned short) var_2);
}
