/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7539
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) 
                    {
                        {
                            arr_14 [i_1] [i_3] [i_1] [i_1] = ((/* implicit */int) 2U);
                            var_12 *= 6U;
                        }
                    } 
                } 
                arr_15 [i_0] [i_1] [i_1] = 4294967280U;
                var_13 = ((/* implicit */unsigned int) -936472001);
                arr_16 [i_1] [i_1] = ((/* implicit */int) 18446744073709551612ULL);
            }
            arr_17 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) max((arr_6 [i_1] [i_0] [i_1]), (arr_0 [i_0])))), (min((var_7), (((/* implicit */unsigned long long int) arr_8 [i_1] [i_1])))))), (min((min((((/* implicit */unsigned long long int) 4U)), (18446744073709551591ULL))), (min((var_1), (((/* implicit */unsigned long long int) arr_1 [i_0]))))))));
            var_14 = ((/* implicit */unsigned long long int) max((var_14), (max((((/* implicit */unsigned long long int) min((max((4294967295U), (var_8))), (max((4294967293U), (((/* implicit */unsigned int) (unsigned char)251))))))), (max((min((var_1), (((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_0] [i_1] [i_1])))), (min((var_10), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0] [i_1]))))))))));
        }
        for (unsigned int i_5 = 0; i_5 < 21; i_5 += 1) 
        {
            var_15 = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) max((arr_6 [i_5] [i_5] [i_5]), (arr_9 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))), (min((((/* implicit */unsigned long long int) arr_6 [i_5] [i_0] [i_5])), (var_10))))), (min((min((arr_3 [i_5]), (var_1))), (((/* implicit */unsigned long long int) min((4294967287U), (((/* implicit */unsigned int) arr_1 [i_0])))))))));
            var_16 = ((/* implicit */unsigned long long int) min((min((min((arr_7 [i_5] [i_5] [i_5] [i_0] [19ULL] [i_5]), (arr_4 [i_5]))), (max((4294967287U), (arr_4 [i_5]))))), (min((((/* implicit */unsigned int) min(((unsigned char)8), ((unsigned char)15)))), (max((386699192U), (arr_7 [i_0] [i_5] [i_5] [i_5] [i_5] [i_5])))))));
        }
        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 3) 
        {
            arr_25 [i_0] [i_6] [i_6] = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) max((4100192606U), (21U)))), (min((var_3), (((/* implicit */unsigned long long int) var_4)))))), (max((max((var_2), (((/* implicit */unsigned long long int) arr_13 [i_6] [i_0] [i_0] [i_0] [i_0])))), (max((6922035993656945278ULL), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_6]))))))));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 21; i_7 += 3) 
            {
                for (int i_8 = 0; i_8 < 21; i_8 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned long long int i_9 = 1; i_9 < 19; i_9 += 1) 
                        {
                            var_17 = 8191U;
                            var_18 = ((/* implicit */unsigned int) min((var_18), (14U)));
                            var_19 = ((/* implicit */unsigned int) min((var_19), (14U)));
                            var_20 = 21U;
                            var_21 = ((/* implicit */unsigned long long int) (unsigned char)193);
                        }
                        for (unsigned int i_10 = 0; i_10 < 21; i_10 += 2) 
                        {
                            var_22 |= ((/* implicit */int) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max(((unsigned char)8), (var_5)))), (min((8168U), (((/* implicit */unsigned int) arr_2 [i_0] [i_6] [i_7]))))))), (min((((/* implicit */unsigned long long int) min((arr_35 [i_0] [i_7]), (var_11)))), (min((var_2), (arr_28 [i_0] [i_0])))))));
                            arr_36 [i_0] [i_6] [i_0] [i_8] [i_8] [i_10] [i_10] = min((max((min((((/* implicit */unsigned long long int) arr_18 [i_10] [i_8] [i_0])), (var_3))), (((/* implicit */unsigned long long int) max((var_4), (((/* implicit */unsigned int) 152857722))))))), (min((max((((/* implicit */unsigned long long int) arr_2 [i_8] [i_7] [i_8])), (arr_3 [i_8]))), (max((201326592ULL), (((/* implicit */unsigned long long int) arr_24 [i_8])))))));
                        }
                        for (int i_11 = 4; i_11 < 20; i_11 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned int) min((max((min((((/* implicit */unsigned long long int) arr_5 [i_8] [i_7] [i_8] [i_11])), (var_7))), (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_24 [i_6])), (171204958)))))), (min((((/* implicit */unsigned long long int) min((arr_10 [i_0] [i_6] [i_7] [i_8] [i_0]), (var_6)))), (min((((/* implicit */unsigned long long int) var_6)), (var_9)))))));
                            var_24 = ((/* implicit */int) max((max((min((((/* implicit */unsigned long long int) var_4)), (729592179077959365ULL))), (((/* implicit */unsigned long long int) min((var_0), (1313426378U)))))), (max((min((((/* implicit */unsigned long long int) var_8)), (var_9))), (((/* implicit */unsigned long long int) max((13U), (((/* implicit */unsigned int) 171204963)))))))));
                        }
                        arr_39 [i_8] [i_7] [i_6] [i_6] [i_6] [i_0] = ((/* implicit */unsigned char) min((min((min((((/* implicit */unsigned int) var_5)), (1150807602U))), (min((((/* implicit */unsigned int) arr_34 [i_8])), (4294967288U))))), (max((((/* implicit */unsigned int) max((((/* implicit */int) arr_24 [i_6])), (-171204955)))), (min((arr_7 [i_0] [i_6] [i_7] [i_8] [i_0] [i_0]), (var_0)))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_12 = 0; i_12 < 21; i_12 += 2) 
                        {
                            var_25 = min((min((min((var_4), (arr_9 [i_12] [i_8] [i_8] [i_8] [i_8] [i_8]))), (min((arr_38 [i_0] [i_6] [i_7] [i_8] [i_12]), (var_11))))), (min((max((4294967288U), (arr_29 [i_0] [i_6] [i_7] [i_12]))), (max((1150807611U), (1150807589U))))));
                            var_26 ^= min((((/* implicit */unsigned long long int) min((max((3144159707U), (((/* implicit */unsigned int) 1587895848)))), (min((var_6), (1952510971U)))))), (min((min((var_10), (var_7))), (min((var_10), (((/* implicit */unsigned long long int) arr_26 [i_12])))))));
                            var_27 = min((((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned int) 171204940)), (386699191U))), (min((3144159694U), (386699192U)))))), (min((((/* implicit */unsigned long long int) max((1150807604U), (3144159731U)))), (min((var_2), (((/* implicit */unsigned long long int) 1300762917U)))))));
                            var_28 = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) 171204958)), (var_4)))), (max((var_2), (((/* implicit */unsigned long long int) var_0)))))), (max((min((var_3), (((/* implicit */unsigned long long int) 2994204389U)))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) 171204964)), (2994204388U))))))));
                        }
                        arr_43 [i_0] [i_0] [i_7] [i_8] = max((max((((/* implicit */unsigned int) max(((unsigned char)10), (var_5)))), (min((var_4), (((/* implicit */unsigned int) arr_40 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))), (min((min((1150807561U), (((/* implicit */unsigned int) 171204944)))), (max((var_8), (((/* implicit */unsigned int) 171204954)))))));
                    }
                } 
            } 
            var_29 = max((((/* implicit */unsigned long long int) min((min((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_19 [i_0] [i_6]))), (min((((/* implicit */unsigned int) 171204960)), (var_11)))))), (min((((/* implicit */unsigned long long int) min((arr_35 [i_6] [i_0]), (arr_32 [2U] [i_6] [i_6] [i_0] [i_0] [i_0])))), (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_1 [i_6])))))));
        }
        for (int i_13 = 4; i_13 < 20; i_13 += 3) 
        {
            var_30 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) arr_34 [i_0])), (arr_11 [20ULL] [i_0] [i_13] [i_13] [i_13]))), (min((arr_12 [i_0] [i_13] [i_13] [i_13] [i_13 + 1]), (((/* implicit */unsigned int) 171204951))))))), (max((max((var_10), (((/* implicit */unsigned long long int) arr_40 [i_0] [i_0] [i_0] [i_13] [i_13] [i_13])))), (max((((/* implicit */unsigned long long int) arr_26 [i_0])), (arr_45 [i_0] [i_0])))))));
            var_31 += ((/* implicit */unsigned char) max((max((max((var_10), (((/* implicit */unsigned long long int) arr_29 [i_0] [i_0] [i_13] [i_13])))), (min((var_1), (((/* implicit */unsigned long long int) arr_33 [i_0] [i_0] [i_0])))))), (((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned int) (unsigned char)246)), (arr_26 [i_13]))), (min((1404342418U), (((/* implicit */unsigned int) 171204948)))))))));
        }
        var_32 -= min((min((((/* implicit */unsigned long long int) max((2693674764U), (var_4)))), (max((16768503050405139327ULL), (((/* implicit */unsigned long long int) 3144159694U)))))), (min((min((((/* implicit */unsigned long long int) 480304240U)), (2495295473985832630ULL))), (min((arr_45 [i_0] [i_0]), (var_1))))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_14 = 0; i_14 < 14; i_14 += 1) 
    {
        arr_52 [i_14] = min((min((((/* implicit */unsigned long long int) min((var_8), (var_4)))), (max((18446744073709551586ULL), (16768503050405139305ULL))))), (((/* implicit */unsigned long long int) max((max((2994204380U), (var_8))), (min((((/* implicit */unsigned int) arr_46 [i_14] [i_14])), (2994204382U)))))));
        var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) max((min((max((var_7), (var_7))), (max((var_7), (((/* implicit */unsigned long long int) arr_4 [(unsigned char)10])))))), (((/* implicit */unsigned long long int) min((max((arr_7 [i_14] [i_14] [i_14] [i_14] [i_14] [4ULL]), (var_4))), (min((((/* implicit */unsigned int) var_5)), (arr_27 [i_14])))))))))));
    }
}
