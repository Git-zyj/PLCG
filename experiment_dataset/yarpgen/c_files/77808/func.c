/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77808
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            var_15 = ((/* implicit */_Bool) (unsigned char)5);
            arr_6 [i_1] = ((/* implicit */unsigned int) (unsigned short)16425);
            var_16 = ((/* implicit */signed char) (unsigned char)22);
            arr_7 [i_1] [i_0] = (_Bool)0;
        }
        for (signed char i_2 = 4; i_2 < 20; i_2 += 4) 
        {
            arr_11 [i_0] = ((/* implicit */unsigned int) (unsigned char)5);
            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (unsigned char)204))));
            var_18 = ((/* implicit */int) (unsigned char)191);
            var_19 = ((/* implicit */int) (unsigned char)204);
        }
        for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            arr_14 [i_0] = ((/* implicit */unsigned int) 1463016943);
            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) 3246918934U))));
        }
        for (int i_4 = 4; i_4 < 21; i_4 += 4) 
        {
            var_21 |= ((/* implicit */short) 1048048364U);
            arr_19 [i_0] [i_0] [i_4 - 4] |= ((/* implicit */_Bool) (unsigned char)121);
            var_22 = ((/* implicit */long long int) (unsigned short)0);
            var_23 |= (unsigned char)52;
        }
        /* LoopSeq 3 */
        for (unsigned char i_5 = 0; i_5 < 22; i_5 += 2) 
        {
            var_24 |= ((/* implicit */unsigned char) -1463016944);
            /* LoopNest 3 */
            for (unsigned int i_6 = 0; i_6 < 22; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned short i_8 = 2; i_8 < 21; i_8 += 2) 
                    {
                        {
                            arr_28 [i_5] |= ((/* implicit */unsigned int) (unsigned char)249);
                            arr_29 [i_0] [i_7] [i_6] [i_7] [i_7] [i_8] = (unsigned char)207;
                            arr_30 [i_7] [i_7] = (_Bool)1;
                            arr_31 [i_5] [i_7] [i_6] [i_7] [i_0] = (unsigned char)230;
                        }
                    } 
                } 
            } 
            var_25 = 2147483647;
        }
        for (int i_9 = 1; i_9 < 20; i_9 += 4) 
        {
            var_26 = ((/* implicit */unsigned short) (unsigned char)251);
            arr_34 [0ULL] |= ((/* implicit */unsigned long long int) 3246918933U);
            var_27 &= ((/* implicit */unsigned int) 2147483647);
        }
        for (unsigned int i_10 = 0; i_10 < 22; i_10 += 2) 
        {
            var_28 = ((/* implicit */unsigned long long int) 977182175);
            arr_37 [i_0] [i_10] = ((/* implicit */unsigned short) 1463016953);
            arr_38 [(_Bool)1] = ((/* implicit */unsigned char) 487831208U);
            var_29 = ((/* implicit */short) (unsigned char)106);
            var_30 = ((/* implicit */_Bool) (unsigned char)148);
        }
        var_31 = ((/* implicit */short) (unsigned char)105);
        arr_39 [i_0] |= ((/* implicit */_Bool) 4095U);
    }
    for (unsigned int i_11 = 0; i_11 < 17; i_11 += 1) 
    {
        var_32 = ((/* implicit */unsigned short) max((min((var_14), (((/* implicit */unsigned int) var_12)))), (((/* implicit */unsigned int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)18))))));
        arr_43 [(unsigned short)10] |= max((((/* implicit */unsigned int) min((((/* implicit */short) var_13)), (arr_21 [i_11] [i_11])))), (max((487831208U), (2025577018U))));
    }
    /* LoopSeq 2 */
    for (short i_12 = 0; i_12 < 21; i_12 += 2) /* same iter space */
    {
        var_33 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned int) arr_25 [(signed char)0] [i_12] [i_12] [i_12] [i_12]))))), (arr_8 [i_12] [i_12] [i_12]))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max(((short)-32766), (((/* implicit */short) arr_23 [i_12] [(unsigned char)9] [(unsigned char)9]))))), (min((arr_24 [i_12] [i_12] [i_12] [i_12]), (((/* implicit */unsigned int) var_10)))))))));
        arr_47 [i_12] = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned int) (_Bool)1)), (max((((/* implicit */unsigned int) (unsigned char)240)), (2467743608U))))), (((/* implicit */unsigned int) max((min(((_Bool)1), ((_Bool)1))), (var_11))))));
    }
    for (short i_13 = 0; i_13 < 21; i_13 += 2) /* same iter space */
    {
        arr_51 [i_13] [i_13] = ((/* implicit */short) min((max((1102010189), (((/* implicit */int) (unsigned char)242)))), (min((((/* implicit */int) (unsigned char)108)), (-1463016959)))));
        /* LoopSeq 4 */
        for (unsigned int i_14 = 0; i_14 < 21; i_14 += 3) 
        {
            var_34 = ((/* implicit */unsigned int) min((max((max((((/* implicit */unsigned long long int) (unsigned char)120)), (14165787612284043000ULL))), (((/* implicit */unsigned long long int) var_5)))), (min((((/* implicit */unsigned long long int) arr_44 [i_13] [i_13])), (4280956461425508608ULL)))));
            var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) min((min((3280227257U), (3312116095U))), (((/* implicit */unsigned int) max((((/* implicit */short) var_12)), (arr_12 [i_13])))))))));
            var_36 |= ((/* implicit */_Bool) max((max((11252720446586035837ULL), (((/* implicit */unsigned long long int) var_14)))), (((/* implicit */unsigned long long int) min(((unsigned char)148), ((unsigned char)107))))));
        }
        /* vectorizable */
        for (unsigned int i_15 = 2; i_15 < 18; i_15 += 1) 
        {
            var_37 = ((/* implicit */_Bool) (short)32754);
            arr_56 [i_13] [i_15 + 1] [i_13] = ((/* implicit */_Bool) (signed char)30);
            arr_57 [i_15 + 3] [i_13] = ((/* implicit */unsigned short) -6520335698381609167LL);
            arr_58 [i_13] [17ULL] = ((/* implicit */int) (_Bool)1);
        }
        for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                arr_65 [7U] [i_16] [i_16] [i_16] = ((/* implicit */int) (short)-31364);
                /* LoopSeq 3 */
                for (short i_18 = 1; i_18 < 19; i_18 += 4) 
                {
                    var_38 = ((/* implicit */long long int) max((var_38), (-1LL)));
                    var_39 ^= ((/* implicit */signed char) (unsigned char)119);
                }
                for (int i_19 = 0; i_19 < 21; i_19 += 1) 
                {
                    /* LoopSeq 2 */
                    for (short i_20 = 0; i_20 < 21; i_20 += 4) 
                    {
                        var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) (unsigned char)136))));
                        var_41 = ((/* implicit */short) 3440109762U);
                        arr_73 [i_16] = (unsigned char)14;
                    }
                    for (int i_21 = 3; i_21 < 19; i_21 += 3) 
                    {
                        arr_77 [i_13] [i_16] [i_17] [i_13] [i_19] [i_16] |= ((/* implicit */int) (unsigned char)150);
                        var_42 = ((/* implicit */unsigned long long int) (unsigned char)255);
                        arr_78 [i_17] [i_19] [i_16] = ((/* implicit */unsigned int) (unsigned char)224);
                    }
                    var_43 = ((/* implicit */unsigned char) 3584U);
                    var_44 = ((/* implicit */int) (unsigned short)18001);
                    arr_79 [i_13] [i_16] [(unsigned char)12] [(unsigned char)10] [i_16] = ((/* implicit */int) (_Bool)1);
                }
                for (short i_22 = 0; i_22 < 21; i_22 += 1) 
                {
                    var_45 = (unsigned char)19;
                    var_46 = ((/* implicit */int) (_Bool)1);
                    var_47 = ((/* implicit */unsigned char) (_Bool)1);
                }
                arr_82 [i_13] [i_16] = ((/* implicit */int) (unsigned char)97);
                arr_83 [(unsigned char)7] [i_16] [i_16] [i_13] = -45840306;
                arr_84 [i_13] [i_13] [i_16] = ((/* implicit */unsigned int) (unsigned char)75);
            }
            for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
            {
                var_48 = ((/* implicit */unsigned char) max((var_48), (((/* implicit */unsigned char) max((min((7877124509546945908LL), (((/* implicit */long long int) arr_59 [i_16 - 1] [i_23 - 1])))), (((/* implicit */long long int) max((arr_59 [i_16 - 1] [i_23 - 1]), (arr_59 [i_16 - 1] [i_23 - 1])))))))));
                arr_87 [i_16] [i_16 - 1] [i_16 - 1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) max((((/* implicit */signed char) var_13)), (arr_10 [i_23 - 1] [i_16 - 1] [i_23])))), (min((arr_26 [i_23 - 1] [i_16 - 1] [i_23] [i_13] [i_16]), (((/* implicit */unsigned int) arr_10 [i_23 - 1] [i_16 - 1] [i_23]))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_24 = 0; i_24 < 21; i_24 += 4) 
                {
                    var_49 = ((/* implicit */_Bool) min((((/* implicit */long long int) max(((unsigned short)41250), (((/* implicit */unsigned short) arr_27 [i_16] [17] [i_23 - 1] [i_23 - 1] [i_24]))))), (max((((/* implicit */long long int) (short)26172)), (-5LL)))));
                    arr_90 [i_13] [i_16] [i_23 - 1] [i_24] = ((/* implicit */signed char) max((((/* implicit */int) max((max((((/* implicit */short) (unsigned char)87)), (var_1))), (((/* implicit */short) arr_2 [i_16] [i_16]))))), (max((arr_35 [i_16 - 1] [i_23 - 1]), (((/* implicit */int) (_Bool)1))))));
                }
            }
            arr_91 [i_16] = ((/* implicit */unsigned char) min((((/* implicit */int) max((var_7), ((unsigned char)13)))), (min((((/* implicit */int) (_Bool)1)), (2147483636)))));
            var_50 = ((/* implicit */short) max((max((var_4), (14165787612284042991ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (_Bool)1)), (var_0))))));
            var_51 = ((/* implicit */_Bool) max((max((arr_44 [i_16 - 1] [i_16 - 1]), (((/* implicit */int) (unsigned char)182)))), (((/* implicit */int) max(((unsigned char)86), (((/* implicit */unsigned char) var_5)))))));
            var_52 = max((((/* implicit */int) max((var_0), (var_8)))), (max((((/* implicit */int) (short)-12197)), (arr_4 [i_16]))));
        }
        for (short i_25 = 2; i_25 < 20; i_25 += 2) 
        {
            var_53 = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) (_Bool)1)), (3007743910539907764ULL))), (((/* implicit */unsigned long long int) (unsigned char)1))));
            var_54 = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) arr_44 [(_Bool)1] [i_25 + 1])), (var_4))), (((/* implicit */unsigned long long int) max(((unsigned char)75), (var_8))))));
            /* LoopNest 3 */
            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
            {
                for (unsigned long long int i_27 = 0; i_27 < 21; i_27 += 1) 
                {
                    for (unsigned int i_28 = 3; i_28 < 19; i_28 += 1) 
                    {
                        {
                            var_55 = ((/* implicit */_Bool) max((var_55), (((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) var_3)), (var_6))), (((/* implicit */unsigned long long int) min((((/* implicit */short) var_7)), (var_1)))))))));
                            arr_102 [i_28] = ((/* implicit */unsigned int) min((min((arr_15 [i_25] [i_25] [i_25 + 1]), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) min((((/* implicit */unsigned char) arr_80 [i_28])), ((unsigned char)71))))));
                        }
                    } 
                } 
            } 
            var_56 &= ((/* implicit */_Bool) max((((/* implicit */unsigned int) min((((/* implicit */int) var_12)), (arr_44 [i_25 + 1] [i_25])))), (min((1244661849U), (((/* implicit */unsigned int) var_3))))));
        }
    }
    var_57 = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((max((910902894U), (((/* implicit */unsigned int) var_1)))), (((/* implicit */unsigned int) var_11))))), (var_6)));
}
