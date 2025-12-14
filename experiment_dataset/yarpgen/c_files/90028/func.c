/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90028
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(3383868907U)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (865858992)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)14)))))) : (max((911098388U), (911098389U))))) : (((/* implicit */unsigned int) max((((int) (signed char)-119)), (2147483647))))));
    var_11 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((unsigned int) var_2))) ? (min((3383868907U), (3383868916U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */int) (signed char)59))))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_6))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 4; i_1 < 21; i_1 += 4) 
        {
            {
                arr_4 [(unsigned char)2] [i_1 - 3] = ((/* implicit */unsigned long long int) -1132146199);
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)-124)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65145)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-111)) && (var_9)))) : ((((+(((/* implicit */int) var_9)))) >> (((((/* implicit */int) (signed char)-113)) + (124)))))));
                                var_13 = ((unsigned char) ((unsigned short) ((unsigned int) var_3)));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */int) ((signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-118)) || (((/* implicit */_Bool) (short)-2252))))), (((9857990308668701778ULL) + (((/* implicit */unsigned long long int) var_4)))))));
            }
        } 
    } 
}
