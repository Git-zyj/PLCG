/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56337
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
        {
            var_11 = (-(((/* implicit */int) arr_2 [i_0] [i_1])));
            var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [(unsigned short)8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))) : (131008LL))))));
            arr_4 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 14ULL)) ? (((/* implicit */long long int) 682804225)) : (131012LL)));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                for (unsigned short i_3 = 2; i_3 < 10; i_3 += 2) 
                {
                    {
                        arr_11 [i_1] [i_1] [i_2] [i_3 - 1] = ((/* implicit */unsigned int) (unsigned char)96);
                        arr_12 [i_0] [i_0] [i_0] [i_1] [i_1] [i_3 - 1] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)185))));
                        arr_13 [i_1] [i_2] [i_1] [i_1] = (i_1 % 2 == 0) ? (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)63147))) / (((((var_4) + (9223372036854775807LL))) << (((((arr_7 [i_1]) + (7341497555775801210LL))) - (2LL)))))))) : (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)63147))) / (((((var_4) + (9223372036854775807LL))) << (((((((arr_7 [i_1]) + (7341497555775801210LL))) - (2LL))) - (6933772455087460020LL))))))));
                        var_13 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_1 [i_3 + 2])) | (arr_9 [(signed char)3] [i_3] [i_3 + 2] [i_3 - 1])));
                    }
                } 
            } 
        }
        for (int i_4 = 0; i_4 < 12; i_4 += 3) /* same iter space */
        {
            var_14 = ((unsigned short) arr_10 [i_0] [i_0] [i_0] [i_0] [(unsigned char)3] [i_0]);
            arr_17 [i_0] [i_4] [i_4] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_4] [i_0] [i_0]))) < (2340343371810703703LL))))));
            arr_18 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) / (var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_14 [i_4] [i_0] [i_0])))) : (18446744073709551615ULL));
        }
        for (int i_5 = 0; i_5 < 12; i_5 += 3) /* same iter space */
        {
            var_15 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [8] [8])) % (((/* implicit */int) arr_2 [i_5] [6LL]))));
            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) -5783665511870962701LL)) ? (((/* implicit */int) (_Bool)1)) : (-519380291))))))));
            arr_22 [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))))) : (arr_6 [i_5] [i_5] [i_5])));
        }
        for (int i_6 = 0; i_6 < 12; i_6 += 3) /* same iter space */
        {
            var_17 |= ((/* implicit */long long int) ((((/* implicit */long long int) arr_25 [i_0])) < (((var_1) | (-9223372036854775793LL)))));
            /* LoopSeq 1 */
            for (unsigned long long int i_7 = 4; i_7 < 11; i_7 += 3) 
            {
                var_18 ^= ((/* implicit */long long int) arr_15 [4LL] [6ULL]);
                var_19 ^= ((/* implicit */long long int) ((unsigned short) var_0));
                arr_29 [(unsigned short)4] [i_6] [i_7] [i_6] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_3 [i_7 - 4] [i_0] [i_6]))));
                var_20 = ((((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned short)2379)))) > (497797902582299806LL));
            }
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)2410)) >> (((((/* implicit */int) (unsigned short)336)) - (308)))));
        }
        var_22 = ((/* implicit */unsigned char) (+(9222809086901354496LL)));
        /* LoopSeq 1 */
        for (long long int i_8 = 0; i_8 < 12; i_8 += 3) 
        {
            arr_34 [i_0] [i_0] = (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65199))))));
            var_23 |= ((/* implicit */unsigned char) arr_7 [10U]);
            var_24 = ((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_0] [i_0] [i_0]))));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 1; i_9 < 11; i_9 += 3) 
        {
            for (long long int i_10 = 4; i_10 < 10; i_10 += 1) 
            {
                {
                    arr_41 [2LL] [i_0] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_35 [i_9 - 1] [i_9] [i_9 + 1])) || (((/* implicit */_Bool) arr_9 [i_9 + 1] [i_0] [i_9] [i_0]))));
                    var_25 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_4)) ? (var_6) : (var_4))));
                    var_26 = ((/* implicit */unsigned long long int) arr_23 [0U] [0U]);
                }
            } 
        } 
    }
    for (unsigned short i_11 = 0; i_11 < 22; i_11 += 3) 
    {
        var_27 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)55817)) ? (((((/* implicit */_Bool) arr_44 [i_11])) ? (var_6) : (((/* implicit */long long int) -682804225)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_45 [i_11] [i_11])) ? (((/* implicit */int) arr_43 [i_11])) : (((/* implicit */int) (signed char)-121)))))))), (((17192984724726885741ULL) >> (((min((3002248297140728599ULL), (9121857217461976255ULL))) - (3002248297140728595ULL))))));
        /* LoopSeq 2 */
        for (long long int i_12 = 0; i_12 < 22; i_12 += 3) 
        {
            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((var_4) - (1099511365632LL))) | (((/* implicit */long long int) ((arr_46 [i_11] [i_11]) ? (((/* implicit */int) (unsigned char)228)) : (((/* implicit */int) arr_47 [i_12] [i_12])))))))) ? (2466016984200545461ULL) : (((/* implicit */unsigned long long int) max((-2340343371810703687LL), (((/* implicit */long long int) (unsigned char)15))))))))));
            arr_49 [(unsigned char)8] = ((/* implicit */long long int) max((((/* implicit */int) max((arr_43 [i_11]), (var_3)))), ((+(((/* implicit */int) arr_45 [i_12] [i_11]))))));
        }
        for (long long int i_13 = 0; i_13 < 22; i_13 += 1) 
        {
            var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) var_1))));
            /* LoopSeq 2 */
            for (unsigned short i_14 = 1; i_14 < 21; i_14 += 1) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_15 = 0; i_15 < 22; i_15 += 2) 
                {
                    arr_57 [i_11] [i_14] [i_14 - 1] [14ULL] [i_15] = ((/* implicit */int) ((var_7) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551608ULL)) ? (((/* implicit */long long int) var_2)) : (var_4))))));
                    var_30 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_52 [i_14 - 1] [i_14 + 1])) || (((/* implicit */_Bool) (signed char)108))));
                    var_31 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_52 [i_14 + 1] [i_14 - 1])) ? (((/* implicit */int) ((3933423634U) > (((/* implicit */unsigned int) arr_54 [i_11] [i_13] [i_15]))))) : (arr_54 [i_11] [i_13] [i_15])));
                }
                var_32 ^= ((/* implicit */_Bool) max(((+(max((((/* implicit */long long int) arr_43 [13ULL])), (-2340343371810703689LL))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned short)65512)) : (((/* implicit */int) var_3))))) != (max((((/* implicit */unsigned int) (unsigned short)0)), (var_2))))))));
                var_33 = (+(min((((/* implicit */unsigned long long int) min((var_1), (var_4)))), (arr_56 [i_14] [i_14 - 1] [i_14 - 1] [i_14 + 1] [(unsigned char)1] [i_14]))));
                /* LoopNest 2 */
                for (unsigned short i_16 = 2; i_16 < 20; i_16 += 2) 
                {
                    for (unsigned char i_17 = 2; i_17 < 19; i_17 += 1) 
                    {
                        {
                            arr_63 [i_14] [i_16 + 1] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */unsigned int) (+(arr_48 [i_17] [i_17 - 2] [i_17]))))))), (((((/* implicit */_Bool) ((unsigned char) (unsigned short)63147))) ? (max((4767349274341382144LL), (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) max((((/* implicit */int) (signed char)-28)), (2147483645))))))));
                            arr_64 [(_Bool)1] [(_Bool)1] [i_14] [i_16 - 2] [i_16] [i_16] [5LL] = ((/* implicit */int) min((max((((/* implicit */long long int) (unsigned short)27927)), (var_1))), (((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned char) var_8)), (arr_53 [i_11] [i_14] [i_16 + 2])))) * ((~(((/* implicit */int) (unsigned short)55817)))))))));
                            arr_65 [i_11] [i_14] [i_11] [i_11] = (-(((/* implicit */int) ((unsigned short) (unsigned short)9744))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                var_34 = -1753582542211182567LL;
                arr_70 [i_11] [11LL] [i_18] |= ((((/* implicit */unsigned long long int) arr_69 [i_11] [i_11] [i_13] [(unsigned short)3])) ^ (24ULL));
            }
            var_35 &= ((/* implicit */long long int) min((((unsigned long long int) max((((/* implicit */unsigned long long int) (unsigned short)63147)), (12433397890571976557ULL)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)147)) >> (((arr_60 [i_13] [18LL] [i_11] [i_11]) - (783661091)))))) ? (((/* implicit */int) arr_45 [i_11] [15U])) : (((/* implicit */int) arr_43 [i_13])))))));
            var_36 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_51 [i_13])) | (((/* implicit */int) arr_51 [i_11]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_59 [i_11] [14LL])) ? (-527881403) : (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) arr_59 [20] [(_Bool)0])) ? (14092248126236005215ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_11]))))));
        }
    }
    var_37 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((unsigned char) max(((unsigned char)108), (((/* implicit */unsigned char) (signed char)40)))))), (min((((unsigned int) var_3)), (max((((/* implicit */unsigned int) var_8)), (var_2)))))));
    var_38 = ((/* implicit */_Bool) var_6);
}
