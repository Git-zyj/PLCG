/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81463
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
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_7)) ? (max((var_0), (((/* implicit */unsigned long long int) 993642992U)))) : (((/* implicit */unsigned long long int) min((var_9), (((/* implicit */long long int) 2097152U)))))))));
                            var_12 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1133776853)) ? (var_1) : (((/* implicit */long long int) 993642992U))))) & (min((((/* implicit */unsigned long long int) (signed char)-4)), (((((/* implicit */unsigned long long int) 993642988U)) + (12685268873684110734ULL)))))));
                            var_13 = ((/* implicit */unsigned int) min((var_3), (min((((/* implicit */long long int) (short)27498)), (var_3)))));
                            var_14 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) min((((((/* implicit */int) (short)-27512)) + (var_4))), (((/* implicit */int) var_8))))) == ((+(((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)47)))))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */long long int) 1133776853);
                arr_10 [i_0] [i_1] [i_1] = min((((/* implicit */long long int) ((((/* implicit */_Bool) min((3242462009U), (((/* implicit */unsigned int) (short)32767))))) && (((1220492292675899474ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13037)))))))), (var_1));
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) var_4)) == (((((/* implicit */_Bool) var_8)) ? (1358512370U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) var_2);
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)140))) > (var_3))) || (((/* implicit */_Bool) (~(var_5))))))), (max((((/* implicit */unsigned long long int) 3828339891439461325LL)), (4ULL))))))));
}
