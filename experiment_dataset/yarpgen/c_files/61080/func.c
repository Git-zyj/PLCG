/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61080
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_0 [14LL] [i_0])) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */unsigned short) (unsigned char)8)))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (1956991072) : (((/* implicit */int) arr_0 [i_0] [i_0])))))));
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((4294967288U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)120)))))))) ? (min((4294967267U), (((/* implicit */unsigned int) arr_0 [i_0] [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)17)))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1]))));
        var_16 += ((/* implicit */int) arr_1 [i_1]);
        arr_6 [i_1] [i_1] = arr_3 [(_Bool)1];
    }
    for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
            {
                {
                    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
                    var_18 = ((/* implicit */long long int) max((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))), (((((/* implicit */int) ((((/* implicit */int) (unsigned char)86)) != (((/* implicit */int) var_1))))) & (((/* implicit */int) arr_16 [i_3 + 1] [i_3 + 1] [i_3 + 1]))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_5 = 2; i_5 < 14; i_5 += 4) 
        {
            for (unsigned char i_6 = 0; i_6 < 18; i_6 += 3) 
            {
                for (unsigned int i_7 = 2; i_7 < 16; i_7 += 1) 
                {
                    {
                        var_19 = ((/* implicit */long long int) min(((((-(((/* implicit */int) (signed char)-86)))) & (((((/* implicit */_Bool) arr_23 [i_2] [(_Bool)1] [i_5] [i_6] [i_7] [i_7])) ? (((/* implicit */int) arr_7 [7U])) : (((/* implicit */int) var_8)))))), (((/* implicit */int) ((signed char) (unsigned char)251)))));
                        arr_25 [i_2] [(unsigned short)0] [i_6] [i_7] = ((/* implicit */short) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)4)), ((short)16383)))) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!((_Bool)1))))));
                        var_20 = ((/* implicit */short) min((var_20), (arr_12 [i_2] [i_6] [i_7 - 2])));
                        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (-(arr_8 [i_2]))))));
                        arr_26 [(signed char)1] [i_5] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_23 [i_7 + 1] [i_7] [i_7] [i_7] [i_7] [i_7 + 1])) ? (arr_23 [i_7 + 1] [i_7] [i_7] [i_7 - 1] [i_7] [i_7]) : (arr_23 [i_7 + 1] [i_7] [i_7] [i_7] [i_7 + 2] [i_7]))), (arr_23 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */unsigned char) min(((~(((((/* implicit */unsigned int) arr_8 [i_2])) | (arr_24 [(short)16] [(short)16] [i_2] [i_2] [i_2] [(short)16]))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(arr_3 [i_2])))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (short i_9 = 0; i_9 < 18; i_9 += 2) 
        {
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)15)) * (((/* implicit */int) ((((/* implicit */int) (unsigned char)248)) < (((/* implicit */int) arr_31 [i_9] [(unsigned char)9])))))));
            var_24 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (signed char)64)) ? (17116846113280884806ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)75)))))));
        }
        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
        {
            arr_36 [(_Bool)1] [i_10] = ((/* implicit */signed char) ((arr_24 [i_10] [(signed char)12] [i_10] [i_10 - 1] [i_10 - 1] [i_10]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_10 - 1] [i_10 - 1] [i_10 - 1])))));
            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-121)))))));
            /* LoopSeq 3 */
            for (unsigned long long int i_11 = 0; i_11 < 18; i_11 += 2) /* same iter space */
            {
                var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_23 [i_8] [i_10] [i_11] [i_8] [i_11] [i_10 - 1])))))));
                var_27 = ((/* implicit */unsigned long long int) (unsigned short)65535);
                arr_41 [(signed char)14] = ((/* implicit */int) (short)28730);
                var_28 = ((/* implicit */signed char) var_4);
                var_29 = ((/* implicit */unsigned char) ((var_7) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_10 - 1] [i_10 - 1])))));
            }
            for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 2) /* same iter space */
            {
                arr_46 [i_12] [i_10] [i_10] [i_8] = ((/* implicit */_Bool) -2794463212938553011LL);
                var_30 = ((/* implicit */long long int) arr_22 [i_8] [i_10] [i_8]);
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                {
                    for (short i_14 = 0; i_14 < 18; i_14 += 2) 
                    {
                        {
                            arr_52 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */short) (~(18446744073709551599ULL)));
                            var_31 = ((/* implicit */unsigned long long int) arr_0 [i_8] [(_Bool)1]);
                            var_32 = ((/* implicit */short) ((((/* implicit */int) (signed char)117)) ^ (((/* implicit */int) var_12))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned long long int i_15 = 1; i_15 < 16; i_15 += 4) 
                {
                    var_33 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)31529))) / (2470539349479789033LL)));
                    arr_56 [i_15] [i_12] [i_10 - 1] [i_8] = ((/* implicit */_Bool) arr_13 [i_10 - 1]);
                }
                for (unsigned short i_16 = 0; i_16 < 18; i_16 += 2) 
                {
                    var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_51 [i_8] [i_10] [i_12] [i_16] [i_16] [(short)17])) ? (((/* implicit */int) arr_57 [i_8] [i_10])) : (arr_51 [i_8] [i_10 - 1] [i_12] [(signed char)1] [i_10] [i_10])))) ? (((/* implicit */unsigned long long int) var_10)) : (var_3)));
                    var_35 -= ((/* implicit */_Bool) arr_27 [i_12] [i_10]);
                    arr_59 [i_8] [i_8] [(unsigned char)15] [i_8] [i_8] [i_8] = ((/* implicit */short) arr_7 [i_8]);
                    var_36 += ((/* implicit */unsigned char) arr_38 [i_10 - 1] [i_12] [i_16]);
                }
                for (unsigned char i_17 = 3; i_17 < 16; i_17 += 4) 
                {
                    var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_54 [i_17 + 1] [i_10 - 1])) >= (((/* implicit */int) arr_60 [i_8] [i_10] [i_12] [i_17])))))));
                    /* LoopSeq 2 */
                    for (long long int i_18 = 0; i_18 < 18; i_18 += 3) 
                    {
                        var_38 = ((/* implicit */unsigned int) arr_63 [i_10 - 1] [i_10] [i_12] [i_17] [i_17 - 1]);
                        var_39 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1099511627776LL)) ? (((549755813887LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32768))))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                    }
                    for (long long int i_19 = 0; i_19 < 18; i_19 += 2) 
                    {
                        var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) var_6))));
                        arr_70 [i_8] [i_10] [i_10 - 1] [i_12] [4] [i_19] = ((/* implicit */short) ((((/* implicit */int) (short)-28723)) + (((/* implicit */int) (unsigned char)185))));
                    }
                }
            }
            for (unsigned long long int i_20 = 0; i_20 < 18; i_20 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_21 = 0; i_21 < 18; i_21 += 2) 
                {
                    for (unsigned short i_22 = 0; i_22 < 18; i_22 += 2) 
                    {
                        {
                            var_41 = ((/* implicit */unsigned short) max((var_41), (arr_74 [i_8] [i_8] [i_8])));
                            var_42 = ((/* implicit */unsigned char) var_12);
                        }
                    } 
                } 
                var_43 = ((/* implicit */unsigned long long int) max((var_43), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_74 [i_20] [i_10 - 1] [i_10])) ? (((/* implicit */int) arr_74 [i_8] [i_10 - 1] [i_20])) : (((/* implicit */int) var_8)))))));
                var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_71 [i_10 - 1] [14U] [i_10 - 1] [i_10])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((var_1) || (((/* implicit */_Bool) (unsigned char)255)))))));
            }
            /* LoopNest 3 */
            for (unsigned char i_23 = 0; i_23 < 18; i_23 += 1) 
            {
                for (long long int i_24 = 1; i_24 < 15; i_24 += 2) 
                {
                    for (long long int i_25 = 0; i_25 < 18; i_25 += 3) 
                    {
                        {
                            arr_87 [i_8] [i_10] [i_23] [i_24 + 3] [i_8] = ((/* implicit */unsigned short) arr_62 [i_8]);
                            arr_88 [i_8] [i_8] [(short)10] [i_8] [i_8] |= ((/* implicit */unsigned long long int) (-(1099511627782LL)));
                            arr_89 [i_8] [i_10 - 1] [i_23] [5ULL] = ((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_43 [i_25] [i_24] [i_10]))))));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_26 = 4; i_26 < 17; i_26 += 1) 
        {
            arr_92 [i_8] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_67 [i_8] [i_26 + 1] [i_26] [i_26 - 4] [i_8]))));
            var_45 = ((/* implicit */unsigned long long int) (short)28745);
            var_46 = ((/* implicit */signed char) min((var_46), (((/* implicit */signed char) ((((/* implicit */int) (unsigned char)195)) << (((((((/* implicit */int) (short)-30175)) + (30206))) - (15))))))));
        }
        var_47 = ((/* implicit */signed char) min((var_47), (((/* implicit */signed char) (((_Bool)1) || (((/* implicit */_Bool) 2147483647)))))));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_27 = 3; i_27 < 19; i_27 += 1) 
    {
        var_48 = ((/* implicit */_Bool) min((var_48), (((/* implicit */_Bool) (+(((/* implicit */int) (short)-24)))))));
        arr_95 [i_27] = ((/* implicit */int) (_Bool)1);
        arr_96 [(unsigned char)5] |= arr_93 [i_27] [i_27 + 1];
    }
    for (signed char i_28 = 1; i_28 < 15; i_28 += 2) 
    {
        var_49 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((9223372036854775797LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_93 [i_28] [i_28])))))))) && (((/* implicit */_Bool) (signed char)126))));
        /* LoopSeq 1 */
        for (unsigned int i_29 = 0; i_29 < 16; i_29 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_30 = 2; i_30 < 14; i_30 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_31 = 1; i_31 < 15; i_31 += 4) 
                {
                    for (unsigned long long int i_32 = 0; i_32 < 16; i_32 += 2) 
                    {
                        {
                            arr_113 [i_28] [i_28] [i_29] [i_28] [i_31] [i_32] = ((/* implicit */unsigned short) max((((/* implicit */unsigned char) (signed char)58)), ((unsigned char)27)));
                            var_50 += ((/* implicit */long long int) min(((-((+(536870911U))))), (((/* implicit */unsigned int) (unsigned char)10))));
                        }
                    } 
                } 
                var_51 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_45 [i_28] [i_29] [i_30])) : (((((/* implicit */int) (short)3)) & (((/* implicit */int) (signed char)-112))))))) || (((/* implicit */_Bool) arr_69 [i_30] [i_29] [i_29] [i_29] [i_28] [i_28])));
                var_52 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (((/* implicit */int) max(((signed char)123), (var_8)))) : (((/* implicit */int) arr_71 [i_30] [i_30] [i_30 - 1] [i_30]))));
                var_53 = ((/* implicit */signed char) min((var_53), ((signed char)58)));
            }
            var_54 |= ((/* implicit */unsigned long long int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-98)));
            var_55 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max(((+(arr_29 [i_29]))), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-102)))))))) * (min((((/* implicit */unsigned long long int) var_8)), (((13846732422258337734ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-117)))))))));
        }
    }
    var_56 = ((/* implicit */unsigned char) var_5);
}
