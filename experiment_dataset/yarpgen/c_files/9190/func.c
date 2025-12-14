/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9190
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
    for (unsigned int i_0 = 4; i_0 < 17; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */int) ((signed char) (unsigned short)511));
        /* LoopSeq 3 */
        for (int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (arr_6 [i_1 + 2] [i_1 + 2]) : (arr_6 [i_1 + 2] [i_1 + 3]))))));
            var_13 ^= (-(arr_5 [i_0 + 1] [i_0 - 1] [i_0 - 1]));
        }
        for (int i_2 = 4; i_2 < 17; i_2 += 4) /* same iter space */
        {
            var_14 *= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)50218)) - (((/* implicit */int) arr_3 [i_0 - 3]))));
            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 6291456U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)511))) : (-1292434969915875628LL)));
            var_16 = ((/* implicit */signed char) arr_3 [9]);
        }
        for (int i_3 = 4; i_3 < 17; i_3 += 4) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) var_7))));
            var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 917504)) ? (var_8) : (-784779984)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 405917990))))) : (((/* implicit */int) ((unsigned short) arr_0 [i_0]))));
            var_19 += ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)511))) + (var_3)))) ? (((((/* implicit */_Bool) (unsigned short)65529)) ? (((/* implicit */int) (unsigned short)65024)) : (((/* implicit */int) (unsigned short)511)))) : (var_7));
        }
    }
    for (signed char i_4 = 1; i_4 < 21; i_4 += 4) 
    {
        arr_16 [i_4] = ((/* implicit */signed char) var_1);
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((int) ((2923998313U) & (((/* implicit */unsigned int) arr_15 [i_4 + 1]))))))));
        /* LoopSeq 4 */
        for (int i_5 = 2; i_5 < 22; i_5 += 2) 
        {
            /* LoopSeq 4 */
            /* vectorizable */
            for (long long int i_6 = 4; i_6 < 22; i_6 += 3) 
            {
                var_21 -= ((/* implicit */int) var_0);
                arr_22 [i_4] = ((/* implicit */long long int) (-(((/* implicit */int) arr_13 [i_5 - 1] [i_6 - 1]))));
            }
            for (int i_7 = 3; i_7 < 22; i_7 += 4) 
            {
                var_22 *= ((/* implicit */signed char) ((((/* implicit */long long int) (-(arr_17 [i_4])))) <= (((long long int) arr_17 [i_4]))));
                var_23 *= ((/* implicit */unsigned int) max((-7404042212307854560LL), (((/* implicit */long long int) (unsigned short)65024))));
                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_7))) ? ((+(arr_18 [(unsigned short)5]))) : (((/* implicit */int) arr_14 [i_4] [10U]))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10))) : (((((/* implicit */_Bool) (unsigned short)127)) ? (((/* implicit */long long int) arr_21 [i_5])) : (((((/* implicit */long long int) var_2)) & (arr_20 [i_7])))))));
            }
            for (long long int i_8 = 1; i_8 < 22; i_8 += 4) /* same iter space */
            {
                arr_28 [i_4] [i_8] = ((/* implicit */int) min((((((/* implicit */unsigned int) ((1514480905) / (-1747937818)))) & (4294967270U))), (264241152U)));
                var_25 = ((/* implicit */int) min((var_25), (((((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_5] [i_5 - 2] [i_8 - 1] [i_8 + 1]))))) ^ (((/* implicit */int) (unsigned short)65028))))));
                var_26 &= ((int) ((((/* implicit */int) arr_26 [i_4 + 2] [i_5 - 2] [i_8 - 1])) == (((/* implicit */int) arr_26 [i_4 + 2] [i_5 + 1] [i_8 + 1]))));
                var_27 = ((/* implicit */int) ((unsigned short) ((unsigned int) arr_13 [(unsigned short)1] [i_5 - 1])));
            }
            for (long long int i_9 = 1; i_9 < 22; i_9 += 4) /* same iter space */
            {
                arr_31 [i_4] [i_5] [i_5] [i_5] = ((((/* implicit */_Bool) arr_25 [i_4] [i_4] [i_4])) ? (((((/* implicit */int) (unsigned short)483)) - (-1747937813))) : (((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */int) arr_25 [20] [i_5 - 2] [(signed char)10])))));
                arr_32 [0] [0] = ((/* implicit */long long int) var_10);
                var_28 = ((/* implicit */int) ((long long int) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) -1781294879)) : (arr_24 [i_5] [i_9] [i_5] [i_5]))))));
                var_29 = ((/* implicit */int) (-(8125276728903539226LL)));
                arr_33 [i_5] [i_5] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */unsigned int) -1781294879))));
            }
            var_30 &= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [(unsigned short)16] [i_5] [14]))) > (((unsigned int) arr_26 [(unsigned short)8] [i_5] [20LL]))));
            var_31 *= ((/* implicit */unsigned int) var_4);
            var_32 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(-1747937834)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) ((signed char) arr_24 [i_5] [12] [20] [i_5]))), (max((var_9), ((unsigned short)16181)))))) : ((~(-784779960)))));
        }
        for (long long int i_10 = 1; i_10 < 21; i_10 += 2) 
        {
            var_33 &= ((/* implicit */unsigned short) max((arr_24 [18] [i_10] [22] [20]), (((/* implicit */unsigned int) 1514480905))));
            arr_38 [i_4] [i_10] [i_10] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) 7404042212307854559LL)) ? (1846848229) : (((/* implicit */int) arr_25 [i_10 + 2] [16] [i_4 + 1])))));
            var_34 = var_7;
            arr_39 [10] [i_10] &= ((/* implicit */unsigned int) 826025460);
        }
        for (int i_11 = 2; i_11 < 19; i_11 += 4) 
        {
            var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) -3410275621273897188LL)) ? (2972124695U) : (((/* implicit */unsigned int) -1781294879))))))))))));
            var_36 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1830032549U)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_10)) : (var_4))) : (((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_11] [i_4])) & (((/* implicit */int) var_0)))))))) || (((/* implicit */_Bool) var_6))));
            var_37 ^= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) 1966063853)) >= (var_3)))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_11])))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_12 = 4; i_12 < 22; i_12 += 4) 
            {
                /* LoopSeq 1 */
                for (int i_13 = 3; i_13 < 21; i_13 += 2) 
                {
                    arr_50 [(signed char)12] [(unsigned short)19] [i_13] [i_12] [i_13] = ((/* implicit */int) (unsigned short)511);
                    var_38 -= ((/* implicit */unsigned short) (+((+(var_3)))));
                    /* LoopSeq 1 */
                    for (long long int i_14 = 1; i_14 < 22; i_14 += 2) 
                    {
                        var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) ((arr_34 [i_14 + 1] [i_11 + 1] [i_4 - 1]) / (var_5))))));
                        arr_54 [i_13] [i_4] [i_11] [i_13] = ((/* implicit */int) (~(((long long int) 66977792))));
                    }
                    /* LoopSeq 3 */
                    for (signed char i_15 = 2; i_15 < 21; i_15 += 3) 
                    {
                        arr_58 [i_11] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 569701632)) ? (-25LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65040)))));
                        arr_59 [2] [2] [(signed char)10] [12] [2] [14] [i_12] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_30 [i_13 + 1]))));
                    }
                    for (int i_16 = 1; i_16 < 22; i_16 += 3) /* same iter space */
                    {
                        var_40 = ((/* implicit */unsigned short) ((unsigned int) arr_42 [i_4] [i_4] [(signed char)1]));
                        arr_62 [2] [i_11] [i_13] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)486))));
                        var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_55 [i_11] [i_11] [i_11])) && (((/* implicit */_Bool) (signed char)15)))))));
                    }
                    for (int i_17 = 1; i_17 < 22; i_17 += 3) /* same iter space */
                    {
                        var_42 |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 698656878)) ? (var_7) : (var_6))) <= (((/* implicit */int) arr_13 [i_13 + 2] [i_12 - 3]))));
                        arr_66 [i_13] [14] [14] [i_13] [(unsigned short)3] = ((/* implicit */unsigned short) (-(var_11)));
                        var_43 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_49 [i_13 - 1] [i_13 - 1] [i_11] [i_13 - 1])) ? (-226127496) : (1781294878)));
                    }
                    var_44 = ((/* implicit */int) max((var_44), (((((arr_29 [i_4] [i_11] [i_12] [2]) == (-7578200416873870806LL))) ? (arr_35 [i_11] [2] [2]) : (((int) var_7))))));
                }
                var_45 = ((/* implicit */unsigned short) min((var_45), (((/* implicit */unsigned short) ((4809895508512677953LL) <= (arr_29 [i_4] [10] [i_4] [i_4]))))));
            }
        }
        for (int i_18 = 1; i_18 < 20; i_18 += 4) 
        {
            var_46 -= ((/* implicit */signed char) (((+(((((/* implicit */_Bool) (unsigned short)3840)) ? (-2142661828321274186LL) : (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_18]))))))) - (((/* implicit */long long int) 7))));
            var_47 = ((/* implicit */unsigned int) (-(33554368)));
            var_48 -= ((/* implicit */long long int) var_8);
        }
    }
    var_49 += ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((int) var_4))) ? (var_1) : (var_10)))));
}
