/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56488
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
    /* vectorizable */
    for (int i_0 = 1; i_0 < 10; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            arr_5 [i_0 + 2] [i_0] |= ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 + 1])) ? (((/* implicit */int) var_11)) : (arr_0 [i_0 + 2]));
            /* LoopSeq 1 */
            for (unsigned short i_2 = 4; i_2 < 11; i_2 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    var_14 = ((/* implicit */signed char) var_2);
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (-(((/* implicit */int) (short)30580))))) / (var_4)));
                }
                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_9 [i_0 + 1] [i_2 - 1] [i_2 - 4] [i_2])) : (((/* implicit */int) arr_9 [i_0 + 2] [i_2 - 1] [5ULL] [i_2])))))));
            }
            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)52)) ? (((int) (_Bool)0)) : (arr_3 [2ULL] [i_0 + 2] [i_0])));
        }
        arr_12 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_0 + 2] [i_0] [(unsigned short)6] [i_0 + 2] [i_0 + 1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_10 [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_0] [i_0 + 1] [i_0 - 1])));
        var_18 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [i_0] [i_0]))));
    }
    for (int i_4 = 1; i_4 < 10; i_4 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (((long long int) arr_15 [i_4] [i_4]))));
        arr_16 [i_4] = ((/* implicit */short) ((max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (2712788821405256836LL))), ((-(arr_13 [i_4]))))) > (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) arr_14 [i_4] [i_4])) != (var_8))) || (((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_4 [i_4 + 2]))))))))));
        var_20 = ((((((((/* implicit */_Bool) arr_2 [(unsigned short)7] [i_4 + 2])) ? (((/* implicit */int) arr_14 [i_4] [i_4])) : (((/* implicit */int) var_11)))) > (((int) (_Bool)1)))) && (((/* implicit */_Bool) (+((((_Bool)0) ? (var_8) : (((/* implicit */int) (short)20144))))))));
        var_21 = ((/* implicit */signed char) arr_0 [i_4 - 1]);
        arr_17 [i_4] [i_4] = ((/* implicit */short) arr_8 [i_4] [i_4] [i_4] [3U]);
    }
    /* LoopSeq 1 */
    for (short i_5 = 3; i_5 < 21; i_5 += 4) 
    {
        var_22 = ((/* implicit */signed char) (+(((((/* implicit */int) arr_19 [i_5 - 1])) - (((/* implicit */int) arr_19 [i_5 - 3]))))));
        /* LoopSeq 2 */
        for (signed char i_6 = 2; i_6 < 19; i_6 += 3) /* same iter space */
        {
            var_23 = ((/* implicit */int) max((var_23), (((((/* implicit */_Bool) ((unsigned char) (-(var_8))))) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) max((arr_20 [i_5 - 2]), (arr_21 [i_5] [i_5 + 1] [i_6]))))))))));
            arr_24 [i_6] [i_5] [i_5] = ((/* implicit */signed char) (~(((/* implicit */int) var_9))));
            /* LoopNest 2 */
            for (unsigned char i_7 = 3; i_7 < 20; i_7 += 4) 
            {
                for (unsigned char i_8 = 0; i_8 < 22; i_8 += 4) 
                {
                    {
                        arr_30 [i_6] [i_7] [i_6] [i_6] [i_6 - 2] [i_6] = ((/* implicit */unsigned char) (_Bool)0);
                        var_24 = ((/* implicit */short) min((((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (var_8)))) : (arr_18 [i_7 + 2]))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_4) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) == (((unsigned long long int) -4301016832011406624LL)))))));
                    }
                } 
            } 
        }
        for (signed char i_9 = 2; i_9 < 19; i_9 += 3) /* same iter space */
        {
            arr_33 [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) (_Bool)1);
            /* LoopNest 3 */
            for (signed char i_10 = 0; i_10 < 22; i_10 += 2) 
            {
                for (int i_11 = 0; i_11 < 22; i_11 += 4) 
                {
                    for (signed char i_12 = 0; i_12 < 22; i_12 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */int) (unsigned char)40);
                            arr_43 [i_9] [i_10] [i_11] [i_12] = ((/* implicit */unsigned char) var_3);
                            var_26 = ((/* implicit */unsigned char) max((((/* implicit */int) ((((((/* implicit */_Bool) arr_22 [i_5] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_5] [i_9]))) : (3492481519U))) > (((/* implicit */unsigned int) (+(var_8))))))), (((arr_35 [i_9] [i_9 - 2]) / (((/* implicit */int) (_Bool)1))))));
                            var_27 = ((/* implicit */short) min((arr_27 [i_9] [i_9] [i_9 + 3]), (((/* implicit */int) ((unsigned short) var_6)))));
                        }
                    } 
                } 
            } 
        }
    }
    /* LoopSeq 2 */
    for (unsigned char i_13 = 1; i_13 < 21; i_13 += 4) 
    {
        arr_46 [i_13] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_37 [(short)20] [i_13] [i_13] [i_13 + 1]))))));
        var_28 = ((/* implicit */signed char) var_12);
    }
    for (long long int i_14 = 0; i_14 < 14; i_14 += 3) 
    {
        arr_50 [i_14] [i_14] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_32 [i_14] [(signed char)16])) ? (((/* implicit */long long int) min((arr_48 [i_14]), (-463447773)))) : (var_4))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_2)))))));
        var_29 *= ((/* implicit */signed char) (_Bool)1);
        /* LoopSeq 1 */
        for (int i_15 = 0; i_15 < 14; i_15 += 2) 
        {
            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) ((int) arr_47 [i_15])))));
            var_31 = ((/* implicit */unsigned long long int) 1529988363);
            arr_55 [i_14] [i_15] [i_15] = ((/* implicit */unsigned short) (~(((((/* implicit */int) max(((short)10450), (((/* implicit */short) arr_29 [i_14] [i_15] [i_14] [i_15] [i_14] [(unsigned char)10]))))) * (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (463447773))))))));
            arr_56 [i_14] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_14] [i_15])) ? (((/* implicit */int) var_13)) : (arr_35 [i_14] [i_14])))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_14])) ? (((/* implicit */unsigned long long int) 463447772)) : (arr_18 [i_14])))) || (((/* implicit */_Bool) ((unsigned int) arr_28 [i_14] [i_14] [i_14] [i_14] [i_14])))))) : (((((var_7) == (((/* implicit */int) arr_42 [i_14] [i_14] [i_14] [i_14] [i_15] [i_14] [i_14])))) ? (arr_45 [i_14]) : (((((/* implicit */int) (unsigned char)158)) << (((2684326639U) - (2684326636U)))))))));
        }
        var_32 = ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_40 [i_14] [i_14] [i_14] [14ULL] [8])))) : (((/* implicit */int) ((signed char) (_Bool)1))));
    }
    var_33 = ((/* implicit */_Bool) var_0);
}
