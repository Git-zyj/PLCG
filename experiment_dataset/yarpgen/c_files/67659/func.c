/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67659
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
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    var_21 = ((/* implicit */unsigned short) (_Bool)1);
                    var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_17) ? (((/* implicit */int) (short)20310)) : (((/* implicit */int) (_Bool)1)))))));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((926442711963882732LL) != (1819516247822053332LL)));
                }
                /* LoopSeq 1 */
                for (unsigned char i_3 = 1; i_3 < 17; i_3 += 2) 
                {
                    arr_12 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -471471638)) ? (min((((/* implicit */long long int) (signed char)-111)), (min((((/* implicit */long long int) (short)462)), (33554432LL))))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_10 [i_0] [i_0])))))));
                    arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_6 [i_1]);
                }
                var_23 = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) ((unsigned int) (signed char)-4))), (max((((/* implicit */unsigned long long int) arr_10 [i_1] [i_1])), (var_6))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((107348135) < (((/* implicit */int) arr_6 [i_1]))))))));
                arr_14 [i_1] = ((/* implicit */long long int) (!(((((/* implicit */_Bool) ((unsigned short) var_15))) && (((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned int) (_Bool)0)))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)17681)) ? (((/* implicit */int) (unsigned short)65533)) : (((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) <= (16455564713681617871ULL)))), (max((((/* implicit */unsigned short) var_17)), ((unsigned short)23785))))))));
    var_25 = ((/* implicit */unsigned long long int) var_12);
    var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (((((/* implicit */_Bool) ((-379442636) % (((/* implicit */int) (signed char)-1))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_16))) - (-8746034657640693133LL))) : (((/* implicit */long long int) ((/* implicit */int) min(((signed char)111), ((signed char)126))))))))))));
}
