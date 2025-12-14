/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67016
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
    var_14 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_8))));
    var_15 -= ((/* implicit */short) var_12);
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 8; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_16 -= ((/* implicit */unsigned char) (((-(((/* implicit */int) (unsigned char)238)))) + (((/* implicit */int) (signed char)2))));
                                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) < ((-(((/* implicit */int) (unsigned short)65535)))))) ? (((long long int) (signed char)-62)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-15716)))))))))));
                                arr_12 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1259767899)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 4485702463298412967LL)))) : (((((_Bool) 552808570682656885ULL)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 5073530225270991833ULL)))) : (var_12)))));
                            }
                        } 
                    } 
                    arr_13 [2] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)114)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((((/* implicit */int) (unsigned short)65519)) << (((var_4) + (2433135206227309605LL))))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */_Bool) var_2);
}
