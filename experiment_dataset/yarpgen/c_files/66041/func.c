/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66041
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned int) arr_0 [i_0]);
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            var_12 = ((/* implicit */unsigned int) arr_0 [i_0]);
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    for (unsigned char i_4 = 1; i_4 < 8; i_4 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)55702)) && (((/* implicit */_Bool) 3934447095U))));
                            var_14 = ((/* implicit */int) ((((/* implicit */_Bool) 3934447103U)) || (((/* implicit */_Bool) var_8))));
                            var_15 = ((/* implicit */short) ((arr_11 [i_2] [i_3] [i_4 + 1] [i_0] [i_4] [i_4 + 1]) >= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 4294967289U))))));
                        }
                    } 
                } 
            } 
            var_16 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) + (var_3))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_1])))));
        }
        var_17 = ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned short)7)) : (((/* implicit */int) (unsigned short)55698)));
    }
    /* LoopSeq 4 */
    for (signed char i_5 = 1; i_5 < 20; i_5 += 1) 
    {
        var_18 = max((var_5), ((+(((/* implicit */int) arr_13 [i_5])))));
        /* LoopSeq 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_7 = 3; i_7 < 22; i_7 += 4) 
            {
                var_19 = ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) var_1)) ? (360520215U) : (((/* implicit */unsigned int) var_2)))), (min((((/* implicit */unsigned int) var_2)), (360520223U))))) + (max((var_1), (((((/* implicit */_Bool) 471468792U)) ? (3934447095U) : (360520224U)))))));
                var_20 = ((/* implicit */unsigned int) arr_17 [i_6] [i_7]);
            }
            var_21 = ((/* implicit */signed char) arr_15 [i_5] [i_6]);
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((5583742194715473547ULL) & (((/* implicit */unsigned long long int) 0LL)))), (((/* implicit */unsigned long long int) ((0U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62375))))))))) ? (min((((/* implicit */long long int) arr_16 [i_5 - 1] [i_6] [i_6])), (((((/* implicit */_Bool) arr_15 [i_5] [i_6])) ? (var_4) : (((/* implicit */long long int) arr_14 [i_5])))))) : (((/* implicit */long long int) ((360520223U) << (((140737488355327ULL) - (140737488355307ULL))))))));
            var_23 = ((/* implicit */short) arr_14 [i_5]);
        }
        /* vectorizable */
        for (unsigned short i_8 = 0; i_8 < 23; i_8 += 2) 
        {
            var_24 = ((/* implicit */unsigned short) arr_19 [i_5 + 2] [i_5 + 2] [22LL]);
            var_25 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) (unsigned short)9826))))));
            var_26 = ((/* implicit */short) arr_17 [i_5 + 1] [i_5 + 1]);
            var_27 = ((/* implicit */int) var_0);
            var_28 = ((/* implicit */unsigned int) arr_20 [(signed char)11] [i_5]);
        }
        /* LoopNest 2 */
        for (signed char i_9 = 0; i_9 < 23; i_9 += 3) 
        {
            for (unsigned short i_10 = 1; i_10 < 22; i_10 += 2) 
            {
                {
                    var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_5]))) : (var_0)))) || (((/* implicit */_Bool) arr_21 [i_5]))));
                    var_30 &= ((/* implicit */unsigned char) (((_Bool)1) ? (((((/* implicit */_Bool) 3934447091U)) ? (arr_24 [i_10 + 1] [16]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)255))))) : (max((((/* implicit */unsigned int) (short)32148)), (360520234U)))));
                }
            } 
        } 
        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_5 + 2] [i_5] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_5 - 1] [i_5] [i_5]))) : (var_8)))) ? (((/* implicit */unsigned long long int) (+(1492338672U)))) : (((arr_28 [i_5] [i_5] [i_5] [i_5]) % (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 16383)) | (7148305774802757771LL))))))));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 23; i_11 += 4) 
        {
            for (unsigned int i_12 = 3; i_12 < 22; i_12 += 2) 
            {
                {
                    var_32 = ((/* implicit */unsigned short) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (4094629679U) : (3934447109U)))));
                    var_33 = ((/* implicit */short) ((((((/* implicit */unsigned int) (+(((/* implicit */int) (short)-29808))))) | (var_8))) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 14U)) != (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned long long int) 1962241266U)) : (70368744177663ULL)))))))));
                    var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_6), (arr_18 [i_5])))) ^ (((/* implicit */int) ((unsigned short) var_6)))));
                }
            } 
        } 
    }
    for (unsigned long long int i_13 = 3; i_13 < 15; i_13 += 1) 
    {
        var_35 |= ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(0LL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_29 [(unsigned char)4] [i_13] [i_13 - 3])) || (((/* implicit */_Bool) 1885659391U))))) : ((~(((/* implicit */int) var_9)))))) == ((+(((/* implicit */int) (_Bool)0))))));
        var_36 = ((/* implicit */long long int) max((var_8), (((/* implicit */unsigned int) (-(((/* implicit */int) var_7)))))));
    }
    for (unsigned short i_14 = 0; i_14 < 17; i_14 += 2) 
    {
        var_37 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((5494881643813110887LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))) / (arr_30 [i_14] [i_14])));
        var_38 = ((/* implicit */int) var_0);
    }
    for (unsigned char i_15 = 0; i_15 < 20; i_15 += 1) 
    {
        var_39 *= ((/* implicit */unsigned int) (-(((/* implicit */int) (short)-27953))));
        var_40 = ((/* implicit */_Bool) ((7U) >> (((((/* implicit */int) (unsigned short)56350)) - (56338)))));
    }
    var_41 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((unsigned char) (_Bool)1))) : (var_2)));
    var_42 = ((/* implicit */unsigned short) var_0);
}
