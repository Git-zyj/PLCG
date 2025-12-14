/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71401
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_20 += ((/* implicit */_Bool) ((max((((/* implicit */long long int) var_15)), (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_1 [(short)16] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)107))))))) / (((/* implicit */long long int) ((/* implicit */int) min(((signed char)-108), ((signed char)126)))))));
        var_21 = ((/* implicit */signed char) arr_0 [i_0] [i_0]);
    }
    for (unsigned short i_1 = 2; i_1 < 20; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                {
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) ((signed char) arr_2 [i_1] [i_1]))), (min((((/* implicit */unsigned char) (signed char)126)), (var_4)))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((short) (signed char)-103)), ((short)-13575))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_4 [i_1] [i_2])), (arr_2 [i_1] [i_3])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2] [i_2]))) : (((long long int) arr_5 [i_1] [i_1] [i_1]))))));
                    var_23 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((long long int) (signed char)-102)) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_6 [i_2] [i_2] [i_3]))))))), (min((arr_9 [(unsigned short)5] [(unsigned short)5] [i_2]), (min((((/* implicit */unsigned long long int) arr_7 [i_1 - 2])), (arr_0 [i_1 + 2] [i_2])))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (int i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) min((((unsigned short) arr_5 [i_4] [i_4] [i_4])), (var_0))))));
            var_25 &= ((/* implicit */unsigned int) arr_11 [i_4] [i_4] [i_4]);
            var_26 = min((arr_1 [i_1] [i_1]), (((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_6 [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)107))) : (arr_10 [i_1] [i_4] [i_4] [(unsigned char)17]))))));
            /* LoopNest 3 */
            for (short i_5 = 0; i_5 < 22; i_5 += 4) 
            {
                for (unsigned char i_6 = 1; i_6 < 19; i_6 += 2) 
                {
                    for (signed char i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_5] [(_Bool)1] [(unsigned char)4])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((arr_10 [i_1] [i_5] [i_6] [(unsigned char)4]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_1])))))))) : (arr_14 [i_7] [i_6] [i_4])));
                            var_28 = ((/* implicit */long long int) ((((int) arr_14 [i_1] [i_1 + 2] [i_1])) - (((/* implicit */int) var_13))));
                        }
                    } 
                } 
            } 
            var_29 = ((/* implicit */unsigned long long int) max((((/* implicit */int) min((var_7), (arr_5 [i_1 + 2] [i_4] [i_4])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 16383ULL)) ? (arr_10 [i_4] [i_4] [i_4] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_4])))))) ? (((/* implicit */int) max((arr_21 [i_1] [i_4] [i_4] [i_1] [i_1]), (((/* implicit */unsigned short) arr_2 [i_1] [i_4]))))) : (((/* implicit */int) (signed char)-108))))));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_30 = ((/* implicit */short) ((long long int) arr_11 [6LL] [(unsigned short)18] [i_8]));
            var_31 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_12)) ? (var_11) : (((var_11) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)39))))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned char) arr_6 [4LL] [i_1] [i_1])), (arr_2 [(signed char)11] [i_8])))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [(_Bool)0] [i_8]))))))))));
            var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) (-(((((/* implicit */int) arr_22 [i_1] [i_1 + 2] [i_1 + 1] [i_1 - 1])) >> (((((/* implicit */int) arr_22 [i_1] [(unsigned short)5] [i_8] [i_1 + 2])) - (5746))))))))));
            var_33 = ((/* implicit */unsigned short) -460046259);
        }
    }
    var_34 = ((/* implicit */unsigned char) min((var_3), (((signed char) (signed char)-126))));
}
