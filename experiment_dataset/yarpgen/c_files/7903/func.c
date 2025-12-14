/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7903
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
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 4; i_1 < 13; i_1 += 1) 
        {
            arr_5 [i_1] [i_1] [i_1] = max(((unsigned char)194), (((unsigned char) arr_4 [i_1])));
            var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) min((((/* implicit */int) var_2)), (((((/* implicit */_Bool) -1575452090)) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (max((1575452114), (((/* implicit */int) arr_2 [i_1 - 2])))))))))));
            arr_6 [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) min((arr_4 [i_1]), (arr_4 [i_1])))), (max((((/* implicit */unsigned int) 1575452067)), (8387584U)))));
            var_11 = ((/* implicit */unsigned short) min((-626502969), (1575452077)));
        }
        for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) 1575452063);
            var_12 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */int) arr_0 [i_0 + 2])) : (((/* implicit */int) arr_0 [i_0 + 2]))))) ? (((max((2147483637), (((/* implicit */int) arr_4 [i_2])))) + (-1575452093))) : ((~(((/* implicit */int) (unsigned char)238))))));
            arr_10 [i_0] [i_2] = ((/* implicit */unsigned char) arr_3 [i_0] [i_0] [i_0]);
            arr_11 [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)5)) >= (((/* implicit */int) arr_8 [i_0])))) ? (((((/* implicit */int) arr_2 [i_2])) & (((/* implicit */int) (unsigned char)251)))) : (((/* implicit */int) arr_0 [i_0 - 1])))))));
        }
        for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_4 = 1; i_4 < 12; i_4 += 4) 
            {
                var_13 = ((/* implicit */unsigned short) (+(1575452091)));
                var_14 = ((/* implicit */unsigned char) min(((unsigned short)43591), (((/* implicit */unsigned short) (unsigned char)157))));
                arr_16 [i_3] [i_3] [i_4 + 1] [i_3] = ((/* implicit */unsigned char) var_6);
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) * (4294967291U)))) ? (((/* implicit */int) arr_14 [i_0] [i_3] [i_0 + 1] [i_4 + 2])) : ((~(((/* implicit */int) arr_3 [i_4] [i_3] [i_0]))))))) ? (((((((/* implicit */int) arr_0 [i_0])) < (((/* implicit */int) arr_8 [i_4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)193))) : (max((16776192U), (((/* implicit */unsigned int) var_1)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) 5U))))))))));
            }
            for (unsigned short i_5 = 0; i_5 < 14; i_5 += 1) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_6 = 1; i_6 < 12; i_6 += 4) /* same iter space */
                {
                    var_16 += ((/* implicit */unsigned char) (+(((/* implicit */int) arr_22 [i_0 - 1] [i_0 + 3] [i_3] [i_6 + 2] [i_6 + 2]))));
                    arr_23 [i_0 + 2] [i_3] = ((/* implicit */int) ((((/* implicit */int) (unsigned char)4)) <= (-1575452079)));
                }
                for (unsigned short i_7 = 1; i_7 < 12; i_7 += 4) /* same iter space */
                {
                    var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_3)), (5U))))));
                    var_18 -= max((((((/* implicit */int) var_9)) / (((/* implicit */int) (unsigned short)25535)))), (((/* implicit */int) var_9)));
                    var_19 += ((/* implicit */unsigned short) (unsigned char)159);
                    arr_26 [i_3] [i_3] [i_3] [i_7 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [8U] [i_3] [i_0 - 1])) ? (((/* implicit */int) min(((unsigned char)51), (var_8)))) : (((/* implicit */int) (unsigned char)96))))) ? (((((/* implicit */_Bool) (unsigned short)43490)) ? (((/* implicit */int) (unsigned char)195)) : (((/* implicit */int) (unsigned char)62)))) : (min((((/* implicit */int) arr_13 [i_7 + 2] [i_7 + 2] [i_0 - 1])), (((((/* implicit */int) (unsigned char)145)) & (((/* implicit */int) var_4))))))));
                }
                var_20 = ((/* implicit */unsigned short) max(((~(((/* implicit */int) max((arr_8 [i_0]), (arr_7 [i_0] [i_3])))))), (min((((/* implicit */int) arr_3 [i_0 - 1] [i_3] [i_3])), (-1592060095)))));
            }
            arr_27 [(unsigned char)8] [i_3] [i_0] |= ((/* implicit */unsigned char) ((unsigned int) (unsigned char)252));
            var_21 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 4])) >= (((/* implicit */int) arr_19 [(unsigned char)11] [i_0 + 2] [i_0] [i_0 + 2])))) ? ((~(((((/* implicit */_Bool) (unsigned short)1023)) ? (28U) : (((/* implicit */unsigned int) arr_21 [i_0 - 2] [i_3] [i_3] [i_3])))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)153)))));
        }
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_24 [(unsigned char)8] [(unsigned char)8] [(unsigned char)8] [(unsigned char)8] [i_0])) % (((/* implicit */int) arr_17 [i_0 - 1] [i_0 - 1] [12U]))))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_22 [(unsigned char)1] [i_0] [i_0] [i_0 + 1] [4])))) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)43499))))), (arr_19 [i_0 + 4] [i_0 + 4] [i_0] [i_0 + 4])))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_19 [i_0 + 2] [i_0] [i_0 + 4] [i_0 - 2])), (arr_3 [i_0 + 4] [i_0 + 4] [i_0 - 2]))))));
        var_23 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)149)) ^ (((/* implicit */int) (unsigned short)24))))) ? (((/* implicit */int) (unsigned char)168)) : (((/* implicit */int) (unsigned char)185)))) / ((+(((/* implicit */int) (unsigned char)4))))));
    }
    /* vectorizable */
    for (unsigned int i_8 = 0; i_8 < 16; i_8 += 4) 
    {
        var_24 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_28 [i_8])) ? (((/* implicit */int) arr_28 [i_8])) : (((/* implicit */int) (unsigned char)143)))) >> (((arr_29 [i_8]) - (2193889899U)))));
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) var_2))) ^ (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)164))) > (arr_29 [i_8]))))));
        /* LoopNest 3 */
        for (int i_9 = 1; i_9 < 14; i_9 += 1) 
        {
            for (unsigned char i_10 = 3; i_10 < 13; i_10 += 1) 
            {
                for (unsigned char i_11 = 0; i_11 < 16; i_11 += 1) 
                {
                    {
                        var_26 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)142)))) != (((/* implicit */int) ((((/* implicit */int) arr_35 [i_8] [(unsigned char)10] [i_10] [i_8])) <= (((/* implicit */int) (unsigned char)210)))))));
                        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((unsigned int) (-(524284U)))))));
                        arr_37 [i_10] = ((((/* implicit */_Bool) arr_31 [i_9 + 2])) ? (((/* implicit */int) arr_36 [i_10] [(unsigned char)4] [i_10] [i_10] [i_11])) : (((/* implicit */int) (unsigned char)236)));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_12 = 2; i_12 < 15; i_12 += 4) 
        {
            for (int i_13 = 0; i_13 < 16; i_13 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_14 = 3; i_14 < 12; i_14 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_41 [3] [i_12 - 1] [i_13] [i_14 - 3])) + (((/* implicit */int) arr_41 [i_8] [i_12 - 1] [(unsigned char)13] [i_14 - 3]))));
                        var_29 = ((/* implicit */unsigned int) (unsigned short)12325);
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)161)) / (((/* implicit */int) var_9))));
                    }
                    var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65522)) || (((/* implicit */_Bool) arr_30 [i_12 + 1] [i_12 + 1])))))));
                }
            } 
        } 
        arr_46 [i_8] = ((0U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)158))));
    }
    var_32 = ((/* implicit */int) var_5);
}
