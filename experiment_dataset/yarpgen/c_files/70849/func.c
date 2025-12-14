/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70849
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
    for (int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0] [i_1] [11] [i_3] [11] = ((/* implicit */unsigned short) ((long long int) (((!(((/* implicit */_Bool) (unsigned char)63)))) ? ((~(var_1))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)177)) : (((/* implicit */int) var_6)))))));
                                arr_12 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1]))))) % (var_4)));
                                arr_13 [i_0] [i_0 + 2] [i_1] [i_2] [i_0] [i_3] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_1))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (unsigned short)65535))))));
                }
            } 
        } 
    } 
    var_10 |= ((/* implicit */int) min((((/* implicit */long long int) (-(((/* implicit */int) ((signed char) var_4)))))), ((~((+(268435455LL)))))));
    var_11 ^= ((/* implicit */unsigned char) (-(-1)));
}
