/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99878
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? ((~(((/* implicit */int) (unsigned char)159)))) : (((/* implicit */int) ((unsigned char) arr_3 [i_1])))))), ((-(arr_0 [i_0])))));
            arr_6 [i_0] |= ((/* implicit */_Bool) (~((+(((/* implicit */int) arr_4 [(signed char)16] [i_0]))))));
        }
        var_10 = ((/* implicit */_Bool) (-((+(((/* implicit */int) (unsigned char)175))))));
        var_11 = ((/* implicit */signed char) ((arr_2 [(_Bool)1]) + (((/* implicit */int) (unsigned char)182))));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 24; i_2 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_3 = 2; i_3 < 20; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_4 = 3; i_4 < 20; i_4 += 2) 
            {
                arr_16 [(signed char)7] [i_3] [i_4] [i_3] = ((((/* implicit */_Bool) (unsigned char)196)) ? (arr_12 [i_2] [i_4 + 4]) : (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_3] [i_3])) & (((/* implicit */int) var_1))))));
                /* LoopSeq 1 */
                for (signed char i_5 = 0; i_5 < 24; i_5 += 3) 
                {
                    var_12 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_4)))) ? ((+(var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_2] [i_3 + 3] [i_4] [i_5])))));
                    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) arr_10 [i_5]))));
                }
            }
            arr_20 [i_2] [i_3] = ((/* implicit */_Bool) var_8);
            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_2 [i_3])) != (arr_0 [i_2])));
        }
        arr_21 [i_2] = ((/* implicit */signed char) arr_13 [i_2] [i_2]);
        var_15 = ((/* implicit */signed char) arr_0 [i_2]);
    }
    for (short i_6 = 0; i_6 < 24; i_6 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_7 = 0; i_7 < 24; i_7 += 1) 
        {
            arr_29 [i_6] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(arr_9 [i_7])))) ^ (((((/* implicit */_Bool) 15516643324014747173ULL)) ? (2930100749694804466ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_6] [19ULL] [i_7] [i_6] [19ULL] [i_7]))) + (3648244307U))))))));
            var_16 = ((/* implicit */_Bool) min(((~(20U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_22 [i_6])) ^ (((/* implicit */int) arr_11 [i_7] [i_7])))))));
        }
        var_17 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) min((arr_12 [i_6] [i_6]), (((/* implicit */long long int) (_Bool)1))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)114)) ? (arr_0 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((((/* implicit */_Bool) 9619544990235451999ULL)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_6])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)65535))))))))));
        arr_30 [i_6] = ((/* implicit */long long int) ((min((arr_10 [i_6]), (((/* implicit */unsigned long long int) arr_2 [i_6])))) | (var_3)));
        var_18 |= ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)16))))) & (arr_8 [i_6] [i_6])));
        arr_31 [i_6] = ((/* implicit */signed char) (-((~(min((((/* implicit */unsigned int) arr_27 [i_6])), (arr_1 [i_6])))))));
    }
    var_19 = ((/* implicit */signed char) var_8);
    var_20 = ((/* implicit */short) (unsigned short)25870);
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -909272415)) ? (5665479520390389035ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)117)))));
    var_22 += ((/* implicit */unsigned int) var_1);
}
