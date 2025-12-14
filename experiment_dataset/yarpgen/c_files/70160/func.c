/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70160
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
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!((_Bool)1)))) : (var_6)))) ? (((((/* implicit */_Bool) -870327764)) ? (1647726770) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_8)))) ? (var_6) : (((/* implicit */int) (short)-1))))));
    var_13 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (16U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned int) (-(var_4)))))), (((((/* implicit */_Bool) -1647726787)) ? (max((3886018773U), (408948523U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)-5)) : (((/* implicit */int) (_Bool)1)))))))));
    var_14 = ((signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (var_11)))) <= (var_2)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_15 *= ((/* implicit */long long int) (_Bool)1);
                arr_5 [i_1] [i_0 + 1] [i_0] = ((/* implicit */unsigned char) ((unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-83))))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (unsigned short i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        {
                            var_16 *= ((/* implicit */_Bool) ((((arr_0 [i_3]) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))) & (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)2032)) | (((/* implicit */int) (short)-13777)))))));
                            arr_10 [i_0] [i_1] [i_2] [i_0] [i_2] [(short)7] = ((((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_3 + 1] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5))) : (arr_6 [i_0 + 1] [i_3 + 2] [i_3]))) >> (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-99))))) ? (((/* implicit */int) (short)5)) : (1646075555))));
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26024))) : (10716956857612389313ULL)));
                        }
                    } 
                } 
                arr_11 [i_0] = var_10;
            }
        } 
    } 
}
