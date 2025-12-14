/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85247
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
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 1; i_2 < 12; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 4; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_11 [i_1] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2 + 1])) ? (arr_2 [i_2 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))))) ? ((+(arr_2 [i_2 + 1]))) : (((arr_2 [i_2 - 1]) ^ (arr_2 [i_2 - 1])))));
                                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27706))) == (((((((/* implicit */_Bool) (unsigned char)0)) ? (10603213124422592084ULL) : (arr_2 [i_3]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3))))))))));
                                var_21 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) 7843530949286959532ULL)))) ? (((((int) arr_5 [i_3] [i_2] [i_1] [i_0])) | (((/* implicit */int) min(((short)-27701), (((/* implicit */short) (_Bool)0))))))) : (((/* implicit */int) (short)-25269))));
                            }
                        } 
                    } 
                    var_22 &= max((((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) var_7)) >> (((524032U) - (524020U))))))), (arr_5 [i_0] [i_2 + 1] [i_2] [i_1]));
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)198)) ? (((((/* implicit */_Bool) min(((short)-32202), (((/* implicit */short) (unsigned char)0))))) ? (((/* implicit */int) ((short) var_8))) : (((/* implicit */int) var_14)))) : (((((/* implicit */_Bool) -1732136931)) ? (((/* implicit */int) arr_4 [i_2 - 1] [i_1] [i_0])) : (((/* implicit */int) arr_0 [i_2 - 1] [i_1]))))));
                }
                var_24 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) < (arr_1 [i_1]))))) : (arr_3 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 10603213124422592084ULL)))) : (max(((-(arr_2 [i_1]))), (((/* implicit */unsigned long long int) (unsigned char)245))))));
                arr_12 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) -1484222196)) ? (10603213124422592060ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))))), (((arr_8 [i_0] [i_0] [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_2 [i_0])))))) ? (max((((/* implicit */unsigned long long int) ((arr_6 [i_0] [i_0] [i_1] [i_1]) << (((((/* implicit */int) (short)22161)) - (22161)))))), (((((/* implicit */_Bool) 7843530949286959518ULL)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17))))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_1] [i_0] [i_0])))))));
            }
        } 
    } 
    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_10)), (min(((unsigned char)1), (((/* implicit */unsigned char) var_7))))))) ? (((((/* implicit */_Bool) min((var_0), (var_2)))) ? (var_18) : (((/* implicit */unsigned long long int) ((long long int) (short)-25269))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((short) (unsigned char)255))) || (((/* implicit */_Bool) ((unsigned char) var_6)))))))));
    var_26 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) != ((+(((((/* implicit */_Bool) -6486083650657026941LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25257))) : (var_16)))))));
}
