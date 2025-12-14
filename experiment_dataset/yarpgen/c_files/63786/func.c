/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63786
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_10 *= ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) arr_1 [i_0])))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_3] [i_0] [i_0] = ((((/* implicit */_Bool) ((((517985167744630657LL) >> (((var_8) - (1587528621U))))) >> (((((((-1058309580) + (2147483647))) >> (((-235920581) + (235920598))))) - (8264)))))) ? (min((((/* implicit */long long int) (unsigned char)93)), (9223372036854775795LL))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)128)) | (((/* implicit */int) (unsigned short)55416))))));
                            var_11 = ((/* implicit */int) (-(((((((/* implicit */long long int) arr_7 [i_1])) & (-831839564923457284LL))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))));
                        }
                    } 
                } 
                var_12 = ((/* implicit */long long int) (unsigned char)142);
                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) var_2))));
                var_14 -= ((/* implicit */_Bool) 9223372036854775791LL);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_4 = 2; i_4 < 18; i_4 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 1) 
        {
            for (long long int i_6 = 0; i_6 < 20; i_6 += 1) 
            {
                for (long long int i_7 = 0; i_7 < 20; i_7 += 1) 
                {
                    {
                        arr_23 [i_4] = (~(max((var_2), (((/* implicit */long long int) (-(((/* implicit */int) arr_19 [i_4] [(signed char)15] [i_4] [i_7]))))))));
                        var_15 = ((/* implicit */_Bool) arr_22 [i_4] [i_7] [(_Bool)1] [(_Bool)1]);
                        var_16 = ((/* implicit */signed char) ((((unsigned int) (short)30866)) / (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)4)))))));
                    }
                } 
            } 
        } 
        arr_24 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_4 + 2] [i_4 + 2])) ? (((/* implicit */int) (unsigned char)92)) : (arr_14 [i_4] [i_4 - 1])))) ? (var_0) : (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_17 [i_4 + 2] [i_4] [i_4 + 2])) ? (140703128616960LL) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_4 - 1] [16U] [i_4] [i_4])))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_8 = 0; i_8 < 20; i_8 += 4) 
        {
            var_17 ^= ((/* implicit */short) (+(arr_15 [i_8])));
            var_18 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((arr_26 [i_8] [i_8]) / (((/* implicit */unsigned long long int) arr_14 [(signed char)17] [i_8])))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) / (arr_14 [10LL] [(signed char)12]))))));
            /* LoopSeq 1 */
            for (int i_9 = 0; i_9 < 20; i_9 += 4) 
            {
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_8])) ? (((((((/* implicit */int) arr_18 [i_8] [i_8])) + (2147483647))) >> (((((/* implicit */int) (unsigned char)78)) - (69))))) : (((((/* implicit */int) (unsigned short)22250)) | (((/* implicit */int) (unsigned short)4092)))))))));
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_27 [i_4 + 1])) ? (arr_27 [i_4 + 2]) : (arr_27 [i_4 - 1])));
                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) var_7))));
            }
        }
        for (short i_10 = 3; i_10 < 17; i_10 += 3) 
        {
            var_22 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_10] [i_4] [i_4] [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((-259476952) / (((/* implicit */int) arr_32 [i_4] [i_4]))))) : (((((/* implicit */_Bool) arr_32 [i_4] [i_10])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_4] [i_10]))))))));
            arr_34 [i_4 - 1] [i_10 + 1] [i_4] = min((((/* implicit */unsigned long long int) ((arr_20 [i_4 - 2] [i_4] [i_10 - 3] [i_10 - 3]) > (((/* implicit */int) var_5))))), (((((/* implicit */_Bool) (signed char)62)) ? (max((((/* implicit */unsigned long long int) (unsigned short)33519)), (var_1))) : (((/* implicit */unsigned long long int) arr_30 [i_4])))));
        }
        var_23 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)2)), (-2817803674151310633LL)))) ? (-600326306453214253LL) : (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_4 - 2] [i_4 - 1]))))));
    }
    var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((-3034279656017930008LL) ^ (var_0))), (((/* implicit */long long int) ((unsigned short) (short)3220)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) ^ (max((((/* implicit */unsigned long long int) -822931160693750489LL)), (13579863918552981363ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)33495), (((/* implicit */unsigned short) var_5)))))) : (((long long int) 8841697583761129547LL))))))))));
    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((/* implicit */long long int) ((var_8) << (((var_8) - (1587528638U)))))) : (var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (-(var_2)))))) : ((-(9223372036854775807LL)))));
}
