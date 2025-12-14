/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91358
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) min((((/* implicit */long long int) var_10)), (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) | (var_7))))))));
        var_14 = ((/* implicit */long long int) min(((-(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (signed char)-49)) : (-233988099))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_4 [i_0]) : (arr_4 [i_1]))))));
            arr_5 [i_1] [i_1] = ((/* implicit */_Bool) arr_4 [(unsigned char)15]);
        }
        for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            arr_8 [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) (((((-(((((/* implicit */int) var_3)) << (((-1300381318165762395LL) + (1300381318165762418LL))))))) + (2147483647))) << (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)1665))))) << ((((((_Bool)1) ? (((/* implicit */int) (unsigned short)63872)) : (((/* implicit */int) (unsigned short)64131)))) - (63845)))))));
            arr_9 [(_Bool)1] [i_2] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_9)))) / (((arr_6 [i_2]) ? (1300381318165762366LL) : (((/* implicit */long long int) arr_0 [i_2] [i_2])))))) >> (((/* implicit */int) arr_6 [i_0]))));
            arr_10 [i_0] [i_0] = ((/* implicit */unsigned long long int) (+((+(arr_0 [i_0] [i_2])))));
        }
    }
    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
    {
        /* LoopSeq 2 */
        for (signed char i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            arr_15 [i_3] = ((/* implicit */_Bool) ((var_10) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_3] [i_4]))) : (max((var_6), (((/* implicit */long long int) var_4))))));
            arr_16 [i_3] [i_3] [i_4] = ((/* implicit */unsigned long long int) (+((+(1300381318165762356LL)))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 22; i_5 += 2) 
        {
            var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)64114)) << (((1300381318165762389LL) - (1300381318165762386LL))))))));
            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL)))))) != (3936334087U))))));
            var_18 = ((/* implicit */_Bool) (~(((/* implicit */int) var_0))));
            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_3] [i_5])) ? (var_6) : (var_7)));
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 2) 
        {
            /* LoopSeq 1 */
            for (long long int i_7 = 0; i_7 < 22; i_7 += 4) 
            {
                var_20 = ((/* implicit */int) ((((/* implicit */int) arr_21 [i_3] [i_6] [i_7])) >= (((/* implicit */int) arr_21 [i_3] [i_6] [i_7]))));
                var_21 = ((/* implicit */_Bool) (-(arr_18 [i_3] [i_6])));
                var_22 = ((/* implicit */unsigned long long int) (-(arr_18 [i_6] [i_6])));
                /* LoopSeq 2 */
                for (unsigned char i_8 = 0; i_8 < 22; i_8 += 4) /* same iter space */
                {
                    arr_26 [i_8] [i_7] [i_6] [i_3] = ((/* implicit */int) (((!(var_10))) ? (var_7) : (((/* implicit */long long int) var_1))));
                    var_23 = ((unsigned short) var_8);
                    var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_8] [i_6])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
                }
                for (unsigned char i_9 = 0; i_9 < 22; i_9 += 4) /* same iter space */
                {
                    arr_29 [i_3] [(unsigned char)11] [i_6] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)39)) ? (((/* implicit */int) arr_11 [i_9])) : (((/* implicit */int) var_4))));
                    var_25 = ((/* implicit */signed char) var_2);
                    arr_30 [i_3] [i_9] [10LL] [i_9] [i_3] = ((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_3] [i_6] [i_7]))) ^ (((((/* implicit */_Bool) arr_13 [i_3] [4U])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_7))));
                    var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))));
                }
            }
            var_27 = (((~(var_1))) >> (((arr_17 [19LL] [i_3] [i_6]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))));
            var_28 = ((/* implicit */int) (((!(((/* implicit */_Bool) var_0)))) ? (arr_13 [i_6] [i_3]) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)24679)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10)))))));
            var_29 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_4)) >> (((((/* implicit */int) var_9)) - (41302))))))));
        }
        /* vectorizable */
        for (unsigned short i_10 = 2; i_10 < 19; i_10 += 4) 
        {
            arr_34 [i_3] [i_10] = ((/* implicit */unsigned short) var_6);
            var_30 -= ((/* implicit */unsigned char) (~(((/* implicit */int) var_4))));
        }
        /* vectorizable */
        for (long long int i_11 = 2; i_11 < 21; i_11 += 1) 
        {
            var_31 -= ((/* implicit */unsigned char) (~(((/* implicit */int) var_2))));
            var_32 = 5428957404376766069ULL;
            var_33 = ((((((/* implicit */_Bool) (unsigned short)52898)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12641))))) - (var_5));
        }
    }
    for (long long int i_12 = 0; i_12 < 10; i_12 += 1) 
    {
        var_34 = ((/* implicit */signed char) (-((-(((/* implicit */int) arr_38 [i_12]))))));
        arr_40 [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_35 [(unsigned char)16])), (var_9)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_35 [(unsigned char)0]))))) : ((-(var_12)))));
        arr_41 [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_12] [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) arr_38 [(unsigned char)8]))) : (max((((((/* implicit */_Bool) arr_39 [i_12])) ? (arr_18 [i_12] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) var_10))))), (min((var_7), (((/* implicit */long long int) var_4))))))));
    }
    var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) var_11))));
    var_36 -= ((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)108))))) ^ (min((((/* implicit */unsigned int) (!((_Bool)1)))), (max((var_12), (var_1)))))));
    var_37 = ((/* implicit */signed char) var_0);
    var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)204)) ? (((/* implicit */int) (unsigned short)12641)) : (((/* implicit */int) (unsigned short)1649))))) && (((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)52907)) ? (((/* implicit */int) (unsigned short)12638)) : (((/* implicit */int) (unsigned short)12657))))))))))));
}
