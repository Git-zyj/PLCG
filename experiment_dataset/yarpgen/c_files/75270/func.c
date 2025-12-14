/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75270
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_2 = 4; i_2 < 20; i_2 += 2) 
                {
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((unsigned long long int) arr_5 [i_0] [9LL] [i_1] [i_0]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)127)) * (((/* implicit */int) (signed char)-127))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (arr_3 [i_2]))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) == (((/* implicit */int) arr_2 [0U])))))))))))));
                    var_19 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [10LL] [10LL] [i_2] [i_2])) / (((/* implicit */int) arr_0 [i_2 + 2] [i_0]))))) ? (((/* implicit */int) (signed char)-107)) : (((/* implicit */int) (unsigned char)221)))));
                    var_20 = ((/* implicit */unsigned short) max((((((/* implicit */int) (_Bool)1)) | (((((/* implicit */int) arr_4 [i_0] [i_1] [i_2] [i_2])) * (((/* implicit */int) arr_1 [9U] [i_1])))))), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 447215624)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(_Bool)1] [i_1] [8U] [i_1]))) : (arr_3 [i_2])))))));
                }
                for (short i_3 = 1; i_3 < 21; i_3 += 2) /* same iter space */
                {
                    arr_9 [i_3] = ((((/* implicit */_Bool) (((-2147483647 - 1)) | (((/* implicit */int) arr_4 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]))))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_3 - 1] [i_3 - 1] [i_3 + 2] [i_3 - 1]))))));
                    var_21 = ((min((((unsigned long long int) 1858483941320607082LL)), (((/* implicit */unsigned long long int) arr_7 [i_3 + 1] [i_3 - 1] [i_3 - 1])))) & (max((min((2097151ULL), (((/* implicit */unsigned long long int) (unsigned char)78)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)510)) < (((/* implicit */int) arr_0 [16U] [i_1]))))))));
                }
                for (short i_4 = 1; i_4 < 21; i_4 += 2) /* same iter space */
                {
                    var_22 -= ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((unsigned int) arr_0 [i_0] [(_Bool)1])) & (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_11 [i_4] [i_4] [i_1] [i_0])))))))), ((+(((unsigned long long int) arr_10 [i_0] [i_0] [i_1] [i_1]))))));
                    var_23 = ((/* implicit */unsigned char) ((_Bool) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_4]))))), (((unsigned long long int) -1820539546)))));
                }
                arr_12 [i_0] [(signed char)15] = ((/* implicit */signed char) ((unsigned char) max((((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (short)32767)) - (32745))))), (((/* implicit */int) ((short) arr_11 [i_0] [i_1] [i_1] [i_0]))))));
                var_24 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) arr_10 [i_0] [i_0] [i_0] [i_0]))) >> (((((((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_1])) * (((/* implicit */int) (signed char)-107)))) - (5640)))))), (((unsigned long long int) max((arr_8 [i_0] [i_1]), (((/* implicit */long long int) 1034380818)))))));
            }
        } 
    } 
    var_25 = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((min((((/* implicit */int) var_2)), (2079904614))), (((/* implicit */int) (!(((/* implicit */_Bool) -1744109293)))))))), (min((((/* implicit */unsigned long long int) ((short) (short)-1))), (var_5)))));
    var_26 *= ((/* implicit */unsigned int) var_17);
    var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8)))))));
}
