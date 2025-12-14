/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94007
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
    var_20 &= ((/* implicit */long long int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) ((_Bool) (+(((/* implicit */int) var_3))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(arr_5 [i_0]))))));
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)55055)) ? ((~(((/* implicit */int) ((short) -4243149950208736818LL))))) : ((~(((/* implicit */int) (unsigned short)55064))))));
                }
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    for (unsigned char i_4 = 3; i_4 < 15; i_4 += 3) 
                    {
                        for (unsigned int i_5 = 1; i_5 < 16; i_5 += 4) 
                        {
                            {
                                var_22 |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((-4243149950208736818LL), (((/* implicit */long long int) (unsigned short)55064))))) ? (max((((/* implicit */long long int) arr_11 [(unsigned short)6] [(short)7] [i_5 - 1])), (-4243149950208736818LL))) : (max((((/* implicit */long long int) arr_14 [i_0])), (var_1))))) & (((/* implicit */long long int) ((11) >> (((((/* implicit */int) (unsigned char)190)) - (172))))))));
                                arr_16 [i_0] [i_1] [i_3] [i_0] [(unsigned short)0] [i_5] [17LL] = ((/* implicit */unsigned short) min((max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) (signed char)0)))), (((int) var_5)))), (((/* implicit */int) ((((/* implicit */_Bool) ((arr_10 [i_5] [i_0] [13]) % (((/* implicit */long long int) -515203702))))) && (((/* implicit */_Bool) (+(arr_10 [i_0 + 2] [i_0] [i_3])))))))));
                                arr_17 [i_0] = arr_5 [i_0];
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned short i_6 = 0; i_6 < 20; i_6 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_7 = 3; i_7 < 19; i_7 += 3) 
        {
            for (short i_8 = 0; i_8 < 20; i_8 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_9 = 0; i_9 < 20; i_9 += 1) 
                    {
                        arr_29 [4ULL] |= (-(((/* implicit */int) var_2)));
                        var_23 = ((/* implicit */unsigned char) -1LL);
                        arr_30 [(unsigned char)13] [i_7] [i_8] [8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)-88))));
                    }
                    /* vectorizable */
                    for (unsigned short i_10 = 0; i_10 < 20; i_10 += 4) 
                    {
                        var_24 = ((/* implicit */long long int) min((var_24), (((-4243149950208736821LL) / (arr_25 [i_7 - 3] [i_10] [i_10] [i_6])))));
                        arr_34 [(unsigned char)2] [i_10] [i_8] &= ((((/* implicit */_Bool) -10LL)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned short)10471)));
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_7] [i_7] [(signed char)9] [2])) << (((var_6) + (1703007896)))));
                    }
                    var_26 = ((/* implicit */int) min(((+(arr_31 [i_7 - 3] [i_7 - 3] [i_7 - 1]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_23 [i_8] [(unsigned char)12]), (((/* implicit */int) var_4))))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_11 = 1; i_11 < 19; i_11 += 3) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                {
                    arr_40 [i_12] [2] [(signed char)6] [i_6] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1983850404)))))) * (var_5))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_12] [13] [i_12])))));
                    arr_41 [i_6] [i_11] [4LL] &= ((/* implicit */signed char) arr_37 [i_6] [1]);
                }
            } 
        } 
    }
    for (unsigned short i_13 = 0; i_13 < 20; i_13 += 3) 
    {
        arr_44 [i_13] = ((/* implicit */int) (~(((long long int) -4243149950208736821LL))));
        arr_45 [i_13] [i_13] = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)39))));
        /* LoopNest 3 */
        for (long long int i_14 = 1; i_14 < 17; i_14 += 1) 
        {
            for (signed char i_15 = 2; i_15 < 17; i_15 += 2) 
            {
                for (long long int i_16 = 0; i_16 < 20; i_16 += 3) 
                {
                    {
                        arr_55 [i_16] [i_15] [i_15] [10] |= ((/* implicit */_Bool) var_19);
                        arr_56 [(unsigned char)17] [i_13] [i_13] [(short)6] = ((/* implicit */unsigned char) max((max((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_14)))), (min((619251001), (((/* implicit */int) (signed char)-39)))))), (min((((/* implicit */int) ((((/* implicit */int) arr_37 [i_16] [i_13])) == (((/* implicit */int) var_10))))), (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_24 [i_15] [(signed char)12])) : (((/* implicit */int) var_14))))))));
                        arr_57 [i_15 + 2] [i_13] [i_13] [2] = ((/* implicit */long long int) max((min((2147483647), (((/* implicit */int) (signed char)0)))), (((arr_28 [i_13] [i_14 + 1] [i_15 - 2] [i_14 + 2]) ? (((/* implicit */int) (short)-32767)) : (var_6)))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_17 = 0; i_17 < 20; i_17 += 2) 
        {
            for (long long int i_18 = 0; i_18 < 20; i_18 += 3) 
            {
                for (unsigned char i_19 = 2; i_19 < 18; i_19 += 1) 
                {
                    {
                        var_27 = 613314547;
                        arr_66 [i_13] [i_13] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)206))));
                        var_28 |= ((/* implicit */unsigned char) ((((1300604513U) & (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-47))))))) >> (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_28 [i_17] [i_18] [i_17] [i_17])) : (((/* implicit */int) arr_20 [i_13] [i_19 + 2])))) >> (((((/* implicit */int) arr_54 [i_13] [i_19 - 1] [i_18] [i_17] [i_13])) - (30062)))))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_21 = 4; i_21 < 16; i_21 += 4) 
        {
            for (long long int i_22 = 2; i_22 < 16; i_22 += 4) 
            {
                {
                    arr_75 [(short)7] [i_21 + 1] [i_22 - 1] [i_22] = ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) ^ (-2147483641))) < (min((arr_33 [i_21] [i_21] [i_21 - 2] [i_21]), (((/* implicit */int) var_0)))))))) | (((((/* implicit */long long int) arr_4 [i_20] [i_20] [i_20])) | (((6955359146141833027LL) / (((/* implicit */long long int) 746094372U)))))));
                    arr_76 [i_20] [i_21 - 2] [i_22 + 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)32642))));
                }
            } 
        } 
        var_29 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)32894))));
        /* LoopNest 2 */
        for (int i_23 = 1; i_23 < 16; i_23 += 3) 
        {
            for (short i_24 = 0; i_24 < 17; i_24 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_25 = 0; i_25 < 17; i_25 += 3) 
                    {
                        for (int i_26 = 3; i_26 < 16; i_26 += 3) 
                        {
                            {
                                var_30 -= ((/* implicit */unsigned char) max((((/* implicit */long long int) var_9)), ((+(((4243149950208736822LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-53)))))))));
                                arr_88 [7] [i_23] [8] [i_20] [3] [i_26] = ((/* implicit */int) 18446744073709551615ULL);
                                var_31 = ((/* implicit */signed char) ((int) min((((/* implicit */int) var_3)), (84733759))));
                            }
                        } 
                    } 
                    arr_89 [i_24] [i_23] [i_24] [i_23] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_10)), (arr_18 [i_23])))) ? (3368651233078098704LL) : (((/* implicit */long long int) max((var_18), (((/* implicit */int) var_9)))))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) var_4)), (max((3548872920U), (((/* implicit */unsigned int) 1572069704)))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_27 = 0; i_27 < 17; i_27 += 4) 
                    {
                        for (int i_28 = 4; i_28 < 15; i_28 += 4) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned char) ((arr_14 [i_24]) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)12))) : (arr_73 [i_20] [i_23] [(signed char)11]))))), (max((min((((/* implicit */int) var_3)), (-84733760))), (((((/* implicit */int) var_2)) * (((/* implicit */int) var_2)))))))))));
                                arr_94 [i_28 - 4] [i_27] [i_24] [i_24] [i_23] [i_20] = ((/* implicit */unsigned char) ((((((arr_59 [(signed char)11] [i_20]) ^ (((/* implicit */int) (short)12)))) <= (((/* implicit */int) max((((/* implicit */unsigned char) arr_9 [(unsigned short)8])), (arr_36 [(unsigned short)15] [i_27] [i_24])))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_19))));
                            }
                        } 
                    } 
                    arr_95 [(signed char)6] [i_23 - 1] [i_24] [i_20] = ((/* implicit */unsigned int) var_13);
                    /* LoopNest 2 */
                    for (long long int i_29 = 0; i_29 < 17; i_29 += 4) 
                    {
                        for (int i_30 = 1; i_30 < 16; i_30 += 1) 
                        {
                            {
                                arr_100 [i_30] [i_23] [3] [i_24] [i_29] [(_Bool)1] [i_30] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((((/* implicit */int) arr_71 [i_24] [0])) + (2147483647))) >> (((/* implicit */int) arr_67 [(unsigned short)0] [i_30 + 1]))))) ? (((((/* implicit */_Bool) -84733760)) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) var_8)))) : (((int) var_7))))));
                                arr_101 [i_30] [i_30] [i_29] [i_24] [(unsigned short)5] [i_30] [7ULL] = ((/* implicit */signed char) ((unsigned char) min((var_14), (((/* implicit */unsigned char) arr_72 [i_20] [i_20] [5] [i_20])))));
                                arr_102 [i_20] [i_23 - 1] [i_24] [i_20] [i_24] [i_23 - 1] [i_23 - 1] &= ((/* implicit */unsigned char) (~(min((((unsigned int) arr_39 [i_20] [1] [i_30])), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)73)))))))));
                                arr_103 [i_30] [i_24] [i_30] = ((/* implicit */long long int) ((int) max((arr_71 [i_23 + 1] [i_29]), (((/* implicit */short) arr_72 [i_23 + 1] [(signed char)13] [i_30 - 1] [i_30 + 1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
