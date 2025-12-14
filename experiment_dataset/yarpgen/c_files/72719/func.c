/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72719
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
    var_10 = ((/* implicit */unsigned long long int) var_4);
    var_11 += ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */long long int) (+(((/* implicit */int) (short)-1)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */_Bool) max((((/* implicit */long long int) arr_4 [i_0] [i_1])), (((((/* implicit */_Bool) min(((short)21), (((/* implicit */short) (unsigned char)184))))) ? (((((/* implicit */_Bool) (unsigned short)59367)) ? (var_8) : (((/* implicit */long long int) arr_1 [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)18)))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (int i_4 = 3; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_13 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_4] [i_4] [i_4 - 1] [i_0 + 1])) ? (max((((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_3]))) | (var_1))), (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_2] [i_3] [i_2] [i_4 - 3])) ? (var_8) : (((/* implicit */long long int) 1242812335U)))))) : (((/* implicit */long long int) (-(((/* implicit */int) var_7)))))));
                                var_14 = ((/* implicit */unsigned long long int) min((var_14), ((~(((((/* implicit */_Bool) 1242812338U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6))) : (17635169815530563824ULL)))))));
                            }
                        } 
                    } 
                } 
                var_15 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2777354071U)) ? (((/* implicit */int) (unsigned char)184)) : (((/* implicit */int) (short)0))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1108268423373679190ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)5))) : (var_6)))) : (var_1)))) ? (((/* implicit */long long int) (+(((((/* implicit */_Bool) (signed char)-109)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) -1698252444)), (arr_6 [i_0] [i_0] [i_0])))) ? (var_1) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_0] [i_0 + 1] [i_0 - 1] [i_1] [i_0 - 1])) ? (-1698252444) : (((/* implicit */int) var_7)))))))));
            }
        } 
    } 
}
