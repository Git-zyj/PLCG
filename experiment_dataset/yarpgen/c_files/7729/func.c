/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7729
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
    var_10 = ((/* implicit */short) (signed char)-31);
    var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) min((var_8), (((/* implicit */short) var_6)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1710271957U)) ? (((/* implicit */int) max((((/* implicit */signed char) var_9)), ((signed char)-2)))) : (max((((((/* implicit */int) (short)-30925)) * (((/* implicit */int) var_7)))), (((/* implicit */int) arr_0 [i_0]))))));
                    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2070)) ? ((+(6150474017931990192LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)0)))))) && (((/* implicit */_Bool) (-2147483647 - 1)))));
                    var_14 = ((/* implicit */short) min((var_14), (arr_7 [i_0] [i_1])));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                arr_13 [(unsigned short)20] [i_1] [(unsigned short)20] [(unsigned short)20] [i_1] |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) max(((signed char)26), ((signed char)42)))) + (((/* implicit */int) (short)-30925))))) / (((((/* implicit */_Bool) ((var_9) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42725)))))) ? (max((((/* implicit */unsigned long long int) (short)-3360)), (3360636450987473926ULL))) : (((((/* implicit */_Bool) 15086107622722077690ULL)) ? (arr_5 [i_0] [i_0] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
                                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_0))))))) ? (max((((arr_6 [i_2] [i_1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned long long int) (unsigned short)752)))) : (((3360636450987473921ULL) << (((((/* implicit */int) arr_9 [i_4] [i_1] [i_4] [i_3] [i_3])) + (76)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (~(((/* implicit */int) var_6))))))) && (((/* implicit */_Bool) ((max((15086107622722077690ULL), (((/* implicit */unsigned long long int) (signed char)3)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
    var_17 += ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((2108592339403546858LL) ^ (2108592339403546858LL)))) ? (((/* implicit */int) var_6)) : (2147483647)))) >= (((((/* implicit */_Bool) max((((/* implicit */long long int) (short)-9398)), (2108592339403546871LL)))) ? ((~(14297068592531614143ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))))));
}
