/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68174
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */int) max((((/* implicit */long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)42577))))), (arr_4 [i_1] [i_1] [i_1])))), ((((-(arr_1 [i_0]))) - (((arr_7 [i_1]) + (((/* implicit */long long int) 15U))))))));
                    arr_8 [i_1] [i_1] [i_1] [11ULL] = ((/* implicit */unsigned short) (+(max((((/* implicit */long long int) arr_3 [i_0] [i_0] [i_0])), (var_9)))));
                    var_11 -= ((/* implicit */long long int) (((-(18322002695886303572ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (_Bool)1))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_3 = 0; i_3 < 14; i_3 += 4) 
    {
        for (unsigned int i_4 = 1; i_4 < 10; i_4 += 4) 
        {
            for (unsigned char i_5 = 2; i_5 < 11; i_5 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) ((max((var_4), (((/* implicit */unsigned int) arr_14 [i_4 - 1] [i_4 - 1] [i_4 - 1])))) >= (((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [i_5 + 3] [i_4 + 3] [i_4 + 3] [i_4 + 4])) | (((/* implicit */int) arr_14 [i_4 + 3] [i_4 + 1] [i_4 + 1])))))));
                    arr_17 [i_3] [i_3] [9LL] [i_5 - 2] = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned int) ((unsigned short) (signed char)(-127 - 1)))), (arr_15 [i_3] [9U] [i_3])))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 14; i_6 += 2) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_13 += ((/* implicit */unsigned short) (-(((((/* implicit */int) (unsigned short)22951)) - (((/* implicit */int) (short)-24178))))));
                                arr_24 [i_7] [11LL] [(_Bool)1] [i_6] [i_7] [i_6] [i_4] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_3])) ? (((/* implicit */int) (unsigned short)29082)) : (((/* implicit */int) (unsigned short)29082))))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_9 [(short)9])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (9053952432476075436LL))) & (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3] [i_7] [i_4]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 14; i_8 += 4) 
                    {
                        for (int i_9 = 4; i_9 < 12; i_9 += 4) 
                        {
                            {
                                var_14 ^= ((/* implicit */unsigned char) max(((+(((/* implicit */int) (signed char)125)))), (((/* implicit */int) (!(((/* implicit */_Bool) 1536)))))));
                                arr_30 [i_3] [i_4] [i_5] [i_5] [i_8] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_19 [i_3] [i_4 + 1] [i_5] [i_8] [i_9]) < (((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_3] [i_5] [(_Bool)1])) - (((/* implicit */int) (unsigned short)21810)))))))) << (((max(((-(((/* implicit */int) (signed char)-101)))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_11 [(unsigned short)10] [i_8] [i_3])), ((unsigned short)42576)))))) - (42575)))));
                                arr_31 [i_9] [13LL] [i_5 + 1] [i_4] [(signed char)13] = ((/* implicit */signed char) max((((_Bool) arr_13 [(unsigned short)10] [i_5 + 3] [i_5 - 2])), (((((/* implicit */int) arr_11 [i_3] [i_9] [13U])) > (((/* implicit */int) arr_28 [i_5] [i_4] [(unsigned short)13] [(unsigned short)5] [(signed char)2] [(unsigned short)13]))))));
                                var_15 *= ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)42598)))))) ^ (((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_4]))) / (var_9)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) max((((/* implicit */unsigned short) var_8)), (var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (max((((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_3))))), (((/* implicit */long long int) max((((/* implicit */unsigned short) var_8)), (var_1))))))));
    var_17 = ((/* implicit */unsigned int) var_1);
}
