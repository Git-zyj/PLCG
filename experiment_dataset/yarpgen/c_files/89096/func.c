/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89096
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
        var_17 = ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_0])) * (((/* implicit */int) arr_2 [i_0]))));
        /* LoopSeq 4 */
        for (unsigned short i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (arr_7 [i_0] [i_1 + 3]) : (((/* implicit */int) ((_Bool) arr_7 [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1])) : (max((((/* implicit */unsigned long long int) (unsigned char)4)), ((+(arr_5 [i_1])))))));
            var_19 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_7 [i_1 - 2] [i_1 - 1])) ? (arr_7 [i_1 - 2] [i_1 - 1]) : (arr_7 [i_1 - 2] [i_1 - 1]))), ((-(arr_7 [i_1 - 2] [i_1 - 1])))));
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) arr_5 [i_0]);
                            var_21 = ((/* implicit */unsigned short) arr_8 [i_4]);
                        }
                    } 
                } 
                var_22 = ((/* implicit */long long int) max((((/* implicit */int) arr_6 [i_0] [i_0])), (((((/* implicit */_Bool) ((short) var_9))) ? ((-(((/* implicit */int) (_Bool)0)))) : (((((/* implicit */_Bool) (unsigned short)1023)) ? (-110799828) : (4194300)))))));
                arr_15 [i_2] [i_0] [i_2] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) arr_11 [i_1 + 2] [i_1 - 1]))))));
            }
            var_23 = ((/* implicit */_Bool) min((var_23), (((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 9368231220401185637ULL)) ? (((/* implicit */int) (signed char)-111)) : (((/* implicit */int) (signed char)124)))) * (((/* implicit */int) max((arr_10 [i_0] [i_0] [i_1]), (((/* implicit */unsigned char) arr_8 [0ULL])))))))) <= (((((/* implicit */_Bool) 2498383826U)) ? (max((((/* implicit */unsigned long long int) (short)0)), (9368231220401185648ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_14 [i_0] [i_1 + 1]))))))))));
        }
        for (int i_5 = 0; i_5 < 17; i_5 += 4) 
        {
            var_24 = ((/* implicit */int) arr_14 [i_0] [i_0]);
            arr_18 [i_0] [i_0] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_0] [i_5])), (var_12))))));
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 1; i_6 < 16; i_6 += 3) 
            {
                for (int i_7 = 0; i_7 < 17; i_7 += 4) 
                {
                    {
                        var_25 = ((2498383833U) << (((unsigned int) (unsigned char)27)));
                        var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0]))));
                        /* LoopSeq 1 */
                        for (signed char i_8 = 0; i_8 < 17; i_8 += 3) 
                        {
                            arr_28 [9] [(unsigned char)14] [i_6] [i_7] [i_6] = ((/* implicit */unsigned int) (~((+(((((/* implicit */_Bool) arr_19 [i_5])) ? (((/* implicit */int) (unsigned short)47135)) : (((/* implicit */int) (unsigned short)0))))))));
                            var_27 = ((/* implicit */short) (+(((/* implicit */int) max((((/* implicit */unsigned short) arr_21 [i_0] [i_0] [8])), (((unsigned short) arr_0 [i_0] [i_0])))))));
                            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 17376866526415219794ULL)) ? (2498383826U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0] [i_0] [(_Bool)1] [i_0] [i_0] [(_Bool)1])))))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 6731687981989291261ULL)) ? (5948365330936469987LL) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_0] [i_5] [i_6] [i_7] [i_8])))))))))));
                            var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((unsigned short) min((((short) 0ULL)), (((/* implicit */short) (unsigned char)6))))))));
                        }
                        var_30 = ((/* implicit */_Bool) 0U);
                    }
                } 
            } 
        }
        for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 1) 
        {
            var_31 &= ((/* implicit */short) min((((/* implicit */unsigned long long int) (unsigned short)47153)), (((((/* implicit */_Bool) max((161100009), (((/* implicit */int) (signed char)79))))) ? (9368231220401185660ULL) : (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) 1048574U)) : (6643146793868227223ULL)))))));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 17; i_10 += 4) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        var_32 &= ((/* implicit */unsigned char) (-(((18302628885633695744ULL) & (((/* implicit */unsigned long long int) (+(arr_3 [i_0] [i_9]))))))));
                        var_33 &= var_5;
                    }
                } 
            } 
        }
        for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 1) 
        {
            var_34 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (unsigned short)37194)), (68719476672ULL)));
            var_35 = ((/* implicit */short) ((max((1796583470U), (((/* implicit */unsigned int) (signed char)-80)))) << (((((/* implicit */int) ((short) ((((/* implicit */_Bool) (signed char)-91)) ? (((/* implicit */int) (signed char)-125)) : (((/* implicit */int) (_Bool)1)))))) + (144)))));
            var_36 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) 1016932717))))) & (((((/* implicit */_Bool) arr_38 [i_0] [i_12] [i_0] [i_12] [(unsigned char)11] [i_12])) ? (((/* implicit */int) arr_39 [i_0])) : (((/* implicit */int) arr_21 [i_0] [i_12] [i_12]))))));
        }
        arr_41 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((max((734279040U), (((/* implicit */unsigned int) (short)-23235)))), (((/* implicit */unsigned int) arr_7 [i_0] [i_0]))))) && (((/* implicit */_Bool) min((arr_24 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) arr_35 [i_0] [i_0])))))));
        arr_42 [i_0] = ((/* implicit */_Bool) ((unsigned long long int) arr_9 [i_0] [i_0] [i_0]));
    }
    for (long long int i_13 = 0; i_13 < 17; i_13 += 4) /* same iter space */
    {
        var_37 = ((/* implicit */short) (+(((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */int) arr_10 [i_13] [i_13] [i_13])) : (((/* implicit */int) arr_10 [i_13] [i_13] [i_13]))))));
        arr_45 [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((max(((_Bool)1), (arr_30 [i_13]))) ? ((+(((/* implicit */int) arr_21 [i_13] [i_13] [(short)16])))) : (((/* implicit */int) min((arr_30 [i_13]), (var_11)))))) : (((/* implicit */int) (((-(((/* implicit */int) (signed char)124)))) <= (((1969663943) - (((/* implicit */int) (_Bool)1)))))))));
    }
    var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 2148330358057312678ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (18446744073709551597ULL))), (((((/* implicit */_Bool) (short)-12698)) ? (var_7) : (((/* implicit */unsigned long long int) var_0))))))) ? (((((/* implicit */_Bool) min(((short)-10909), (((/* implicit */short) var_11))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) : (((/* implicit */int) var_15)))) : (((((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) (signed char)-78))))) << (((((/* implicit */_Bool) 4109665837U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_1))))))));
    var_39 = ((/* implicit */short) var_6);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_14 = 0; i_14 < 13; i_14 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_15 = 0; i_15 < 13; i_15 += 3) 
        {
            var_40 = ((/* implicit */_Bool) arr_47 [i_14]);
            arr_50 [i_14] [i_14] [i_14] = ((/* implicit */short) (+(((((/* implicit */unsigned int) 449896562)) & (4294967295U)))));
            var_41 = ((/* implicit */unsigned int) (+(arr_5 [i_14])));
        }
        for (unsigned long long int i_16 = 0; i_16 < 13; i_16 += 3) 
        {
            var_42 = (-(((/* implicit */int) arr_53 [i_14] [i_16])));
            arr_54 [i_14] = ((/* implicit */short) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_6 [i_14] [i_14])) : (((/* implicit */int) (signed char)3)))) + (((/* implicit */int) (signed char)75))));
        }
        arr_55 [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)102)) ? (((/* implicit */int) var_1)) : (var_14)))) ? (((/* implicit */int) arr_22 [(short)14] [i_14] [i_14] [i_14] [i_14] [i_14])) : (((/* implicit */int) ((signed char) arr_39 [i_14])))));
    }
    /* vectorizable */
    for (signed char i_17 = 4; i_17 < 14; i_17 += 3) 
    {
        arr_58 [i_17 + 3] [i_17] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_17 - 3])))));
        arr_59 [i_17] = ((/* implicit */_Bool) ((unsigned char) var_3));
        /* LoopNest 3 */
        for (int i_18 = 2; i_18 < 15; i_18 += 4) 
        {
            for (unsigned char i_19 = 3; i_19 < 15; i_19 += 3) 
            {
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    {
                        var_43 = (~(((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) 3558025751U)) : (14244328157422754704ULL))));
                        var_44 = ((/* implicit */int) min((var_44), (((/* implicit */int) ((unsigned short) arr_0 [i_17 - 4] [i_17 + 2])))));
                        var_45 = ((/* implicit */unsigned char) arr_62 [i_18 - 1] [(signed char)12] [i_18 - 1] [i_18]);
                    }
                } 
            } 
        } 
        var_46 = ((/* implicit */signed char) ((var_12) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_66 [i_17] [i_17 - 3] [16U] [i_17])))));
        var_47 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)-21460)))))));
    }
    var_48 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))));
}
