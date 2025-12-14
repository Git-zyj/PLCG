/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90835
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 6; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    {
                        arr_10 [(unsigned char)8] [i_1] [i_2] [5LL] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0]))))) ^ ((+(((/* implicit */int) arr_4 [i_2]))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_13 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) arr_7 [i_0] [i_1] [i_4]))) <= (((((((/* implicit */int) (signed char)-23)) + (2147483647))) >> (((((/* implicit */int) (signed char)-1)) + (28)))))));
                            arr_14 [i_0] [i_1] [i_2] [(unsigned short)4] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [8ULL] [i_3])) ? (var_3) : (((/* implicit */int) (unsigned char)4))))) || ((!(((/* implicit */_Bool) var_7))))));
                        }
                    }
                } 
            } 
            arr_15 [i_0] [i_1] [i_0] = ((/* implicit */short) max((((max((((/* implicit */unsigned long long int) var_3)), (var_4))) << (((((/* implicit */int) arr_2 [i_0 - 1])) - (15527))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_8 [i_1]), (arr_1 [9U])))) ? (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0])) == (((/* implicit */int) arr_0 [i_0]))))) : ((~(((/* implicit */int) arr_11 [i_0 + 1] [9U] [i_1] [(_Bool)1] [i_1] [9LL])))))))));
        }
        arr_16 [i_0] = ((/* implicit */unsigned char) max((arr_1 [(short)3]), (((/* implicit */long long int) ((((/* implicit */_Bool) 2159946149U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0 + 3] [2U] [i_0 + 4] [i_0] [i_0 + 4]))) : (max((var_7), (((/* implicit */unsigned int) (signed char)0)))))))));
    }
    /* LoopNest 2 */
    for (signed char i_5 = 3; i_5 < 12; i_5 += 4) 
    {
        for (unsigned int i_6 = 1; i_6 < 12; i_6 += 1) 
        {
            {
                arr_23 [6LL] [i_5] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)0)) && (((/* implicit */_Bool) arr_17 [i_5]))))) < (((/* implicit */int) max(((short)511), (((/* implicit */short) (unsigned char)252)))))))), (var_9)));
                arr_24 [i_5] = (-(((((/* implicit */_Bool) 2044U)) ? (((((/* implicit */_Bool) arr_20 [i_5])) ? (((/* implicit */int) arr_18 [i_5])) : (((/* implicit */int) arr_19 [(short)8] [(signed char)8] [(short)8])))) : (((/* implicit */int) max(((signed char)10), (arr_17 [0])))))));
            }
        } 
    } 
    var_10 = ((/* implicit */signed char) ((unsigned char) max(((-(((/* implicit */int) (unsigned short)9)))), (((/* implicit */int) var_1)))));
    /* LoopNest 2 */
    for (unsigned int i_7 = 0; i_7 < 23; i_7 += 4) 
    {
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            {
                arr_31 [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294965252U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)2))) : (max((((/* implicit */unsigned int) (signed char)-3)), (2228255903U)))))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (arr_29 [i_8] [i_7]) : (((/* implicit */unsigned int) var_3))))), ((+(4428815161509300082LL))))) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [(_Bool)1])))));
                arr_32 [i_8] = ((/* implicit */signed char) ((((/* implicit */long long int) arr_26 [i_7])) & (min((((-4428815161509300091LL) | (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) arr_29 [i_8 - 1] [i_8 - 1]))))));
            }
        } 
    } 
}
