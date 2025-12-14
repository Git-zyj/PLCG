/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69697
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) 15ULL)) ? (1521223828) : (((/* implicit */int) (_Bool)1))));
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max(((-2147483647 - 1)), (((/* implicit */int) var_10))))), (16999326367872706701ULL)))) ? (((((/* implicit */_Bool) var_2)) ? ((~(-1717176589))) : (min((((/* implicit */int) var_2)), (var_6))))) : ((-((-(((/* implicit */int) var_2)))))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 24; i_2 += 2) 
            {
                for (int i_3 = 1; i_3 < 22; i_3 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (signed char i_4 = 3; i_4 < 24; i_4 += 2) 
                        {
                            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3 + 2] [i_3 + 3] [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 + 2] [i_3 + 3])) ? (arr_14 [i_3 + 3] [i_3] [i_3 + 1] [i_3 + 1] [i_3] [i_3 + 3] [i_3 - 1]) : (arr_14 [i_3 + 2] [i_3] [i_3 + 1] [i_3] [i_3 + 2] [i_3 - 1] [i_3 - 1])))) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) ((_Bool) arr_15 [i_1] [i_4 - 1] [i_1] [i_1] [i_4])))));
                            arr_18 [i_1] [i_2] [i_3] [i_4 - 1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((var_8) ? (arr_15 [i_1] [i_1] [i_2] [i_1] [i_1]) : (arr_15 [i_1] [i_1] [i_2] [i_3 + 1] [i_4])))) ? (((/* implicit */int) arr_12 [i_0] [i_1])) : (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])) ? (((/* implicit */int) (unsigned short)11681)) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_2])))))) > (((((/* implicit */_Bool) -6228851337729143923LL)) ? (((arr_2 [i_2] [i_0]) - (((/* implicit */int) arr_17 [i_0] [i_1])))) : (((/* implicit */int) var_8))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) /* same iter space */
                        {
                            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((arr_8 [i_2 - 1] [i_5] [i_3 - 1] [i_2 - 1]) / (arr_8 [i_2 - 2] [i_5] [i_3 + 1] [i_5]))))));
                            var_17 = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)53854)) >= (((/* implicit */int) (short)-10029)))) ? (((/* implicit */int) (unsigned short)53854)) : (((/* implicit */int) arr_11 [i_2 - 2]))));
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_3] [i_5])) ? (((/* implicit */int) (unsigned short)11704)) : (var_1)))) ? (((/* implicit */int) arr_16 [i_2 - 2] [i_1] [i_3 - 1] [i_1] [i_5])) : (775552772)));
                            var_19 = ((/* implicit */long long int) ((((((/* implicit */int) arr_1 [i_1] [i_1])) <= (((/* implicit */int) (unsigned char)182)))) ? ((~(((/* implicit */int) (unsigned short)11681)))) : (((/* implicit */int) arr_12 [i_3 + 1] [i_2 - 2]))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 25; i_6 += 4) /* same iter space */
                        {
                            arr_23 [i_1] [i_1] [i_2] [i_2] [i_3] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((~(arr_15 [i_1] [i_1] [i_2 - 2] [i_3] [i_6]))), (((var_5) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)53857))))))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)95)) & (((/* implicit */int) ((arr_13 [i_1]) && (((/* implicit */_Bool) (signed char)11))))))))));
                            var_20 ^= ((/* implicit */long long int) (-(((/* implicit */int) ((((((/* implicit */_Bool) arr_11 [i_1])) ? (((/* implicit */long long int) arr_15 [i_2] [i_1] [i_1] [i_1] [i_2])) : (arr_9 [i_0] [i_0] [i_2] [i_3]))) < (((((/* implicit */_Bool) (unsigned char)182)) ? (5781520128967927001LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)187))))))))));
                        }
                        var_21 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_10 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_3 - 1])) || (((/* implicit */_Bool) arr_10 [i_2 + 1] [i_2 + 1] [i_3] [i_3 + 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_2 - 1] [i_2 - 1] [i_3] [i_3 - 1])) ? (((/* implicit */long long int) arr_8 [i_2 - 2] [i_2] [i_2] [i_3 + 3])) : (arr_9 [i_2 + 1] [i_2 - 1] [i_3] [i_3 + 2])))) : (min((((/* implicit */unsigned long long int) (unsigned char)182)), (arr_10 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_3 + 1])))));
                    }
                } 
            } 
        } 
        var_22 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)190))) - (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)53854))))) ? (((3405476265692130279ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11681))))) : ((+(arr_7 [i_0] [i_0] [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 11; i_7 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                arr_31 [i_7 + 1] [i_8] [i_9] [i_8] = ((/* implicit */unsigned short) ((arr_16 [i_9] [i_7 - 1] [i_9] [10] [i_9]) ? (((/* implicit */int) (unsigned char)73)) : (((/* implicit */int) arr_22 [i_7 - 1] [i_7] [i_7] [i_8 + 1] [i_9] [i_9] [8]))));
                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (unsigned short)0))));
            }
            arr_32 [i_7] [i_8] = ((((/* implicit */int) arr_16 [i_8 + 1] [i_8 + 1] [i_8 + 1] [24ULL] [24ULL])) - (((/* implicit */int) (signed char)-4)));
            var_24 += ((/* implicit */short) ((((arr_9 [i_7] [i_7 - 1] [i_7 + 1] [i_8]) | (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_7] [i_7 - 2] [i_7]))))) != (((/* implicit */long long int) ((/* implicit */int) (signed char)22)))));
            /* LoopNest 3 */
            for (long long int i_10 = 0; i_10 < 12; i_10 += 4) 
            {
                for (unsigned short i_11 = 1; i_11 < 10; i_11 += 3) 
                {
                    for (short i_12 = 0; i_12 < 12; i_12 += 2) 
                    {
                        {
                            var_25 ^= ((unsigned short) arr_41 [i_7] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_11] [(unsigned short)11]);
                            var_26 += ((long long int) var_9);
                        }
                    } 
                } 
            } 
        }
        var_27 = ((((/* implicit */_Bool) arr_29 [i_7] [i_7 + 1] [i_7 + 1] [i_7])) ? (((/* implicit */int) arr_1 [i_7 + 1] [i_7])) : (((/* implicit */int) arr_1 [i_7 + 1] [i_7])));
    }
    var_28 = ((/* implicit */unsigned long long int) ((long long int) max((min((((/* implicit */unsigned short) var_10)), ((unsigned short)19249))), (((/* implicit */unsigned short) var_5)))));
}
