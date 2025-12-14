/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88184
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
    var_11 = ((/* implicit */signed char) min((min((var_0), (((/* implicit */unsigned int) var_8)))), (((/* implicit */unsigned int) 1893568897))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                arr_10 [i_0] [i_1] = var_6;
                arr_11 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) -303882606);
                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) -568730078)) ? (((((/* implicit */_Bool) (short)14511)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_4 [i_0 + 3] [i_1] [i_2])))) : (((((/* implicit */int) arr_5 [i_0])) << (((/* implicit */int) (_Bool)1))))));
            }
            for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    arr_16 [i_0] [i_4] [i_0] [i_4] = ((/* implicit */_Bool) ((0) | (((/* implicit */int) (_Bool)1))));
                    arr_17 [(signed char)10] [i_1] [i_3] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) (~((+(arr_8 [(unsigned short)4] [i_1] [i_0 - 1])))));
                    var_13 = ((/* implicit */long long int) var_0);
                    arr_18 [i_1] [i_4] [i_3] [i_1] [i_4] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (arr_3 [i_0 + 3]) : (arr_3 [i_0 - 2])));
                    arr_19 [i_0 + 1] [i_1] [i_4] = (-(((/* implicit */int) (_Bool)1)));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_23 [i_0] [i_0] [i_3] [i_0] [i_0] [i_5] = ((/* implicit */short) max((((/* implicit */long long int) ((unsigned short) ((((/* implicit */int) (_Bool)1)) < (-1893568897))))), (((((/* implicit */long long int) 3462550303U)) - (-646378999425780137LL)))));
                    arr_24 [i_0] [i_0] [i_0] [4U] [i_5] [i_3] = 1751532017;
                    arr_25 [i_5] [i_3] [i_3] [i_1] [i_0] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) var_4)) + (((((/* implicit */_Bool) (+(705334192)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1)))))) : (((/* implicit */int) (_Bool)1))))));
                    var_14 |= ((/* implicit */signed char) min(((~(arr_1 [i_0 - 1]))), (((/* implicit */long long int) ((_Bool) 1339795107258478259LL)))));
                }
                var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1751532007))));
            }
            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) (signed char)-19)) < (1893568877)))))))));
            arr_26 [i_0] [(short)19] = ((/* implicit */_Bool) (~((~(((/* implicit */int) (short)-8536))))));
        }
        /* vectorizable */
        for (signed char i_6 = 0; i_6 < 20; i_6 += 2) 
        {
            arr_30 [i_0 - 2] = ((/* implicit */int) (-(arr_15 [i_0 - 1] [i_6])));
            arr_31 [i_0] [i_0] = ((arr_12 [i_0 + 1]) | (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0 - 1] [i_0 - 2] [i_0 - 2] [i_0 - 2]))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_7 = 0; i_7 < 20; i_7 += 3) 
        {
            var_17 = ((/* implicit */long long int) ((((/* implicit */int) (((-2147483647 - 1)) != (arr_35 [i_0])))) >= (((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) arr_5 [i_0])))))));
            var_18 = (~(685898624768278273LL));
            /* LoopSeq 2 */
            for (unsigned int i_8 = 0; i_8 < 20; i_8 += 3) /* same iter space */
            {
                var_19 += (-((-(((/* implicit */int) (_Bool)1)))));
                var_20 = ((int) arr_14 [i_8] [i_0 + 1] [i_8] [i_7]);
                var_21 = ((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-8)) + (2147483647))) >> (((/* implicit */int) (_Bool)1))));
                arr_39 [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_8] [i_7] [11] [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0 + 1] [i_8]))) : (((((/* implicit */_Bool) (signed char)19)) ? (((/* implicit */long long int) 1925021116)) : (2305843009213693952LL)))));
                var_22 = ((/* implicit */int) arr_28 [i_0] [1LL] [i_0 + 3]);
            }
            for (unsigned int i_9 = 0; i_9 < 20; i_9 += 3) /* same iter space */
            {
                arr_43 [i_9] [i_9] = 6400228725064682930LL;
                var_23 = ((/* implicit */signed char) (+((-2147483647 - 1))));
                arr_44 [i_0 - 2] [i_9] [i_0 - 2] [i_0] = ((/* implicit */long long int) ((_Bool) arr_0 [i_0 - 2]));
            }
        }
        arr_45 [i_0] [i_0] = ((/* implicit */unsigned char) arr_35 [i_0 - 2]);
        arr_46 [i_0] = (!(((/* implicit */_Bool) -4244527428736617748LL)));
        arr_47 [i_0 + 2] = ((/* implicit */long long int) (+((-(((((/* implicit */_Bool) var_6)) ? (arr_32 [i_0]) : (((/* implicit */int) (unsigned short)3))))))));
    }
    for (int i_10 = 2; i_10 < 13; i_10 += 3) /* same iter space */
    {
        arr_51 [i_10] = ((/* implicit */int) (+(((((/* implicit */_Bool) max((((/* implicit */int) arr_5 [18LL])), (1925021116)))) ? (((/* implicit */long long int) ((((((/* implicit */int) arr_6 [i_10])) + (2147483647))) >> (((/* implicit */int) (_Bool)1))))) : (max((-2869133119298633646LL), (((/* implicit */long long int) var_7))))))));
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 17; i_11 += 4) 
        {
            for (unsigned char i_12 = 0; i_12 < 17; i_12 += 4) 
            {
                for (signed char i_13 = 1; i_13 < 15; i_13 += 4) 
                {
                    {
                        arr_62 [(_Bool)1] [i_10] [i_10] [i_12] [i_13] [(short)10] = ((/* implicit */_Bool) arr_36 [i_10]);
                        arr_63 [i_10] [i_11] [i_11] [i_13] [i_10] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_53 [i_10 + 3] [i_10 + 4])) ? (((/* implicit */int) (signed char)17)) : (((/* implicit */int) arr_55 [i_10])))), ((+(((/* implicit */int) (unsigned char)0))))));
                    }
                } 
            } 
        } 
        var_24 *= ((/* implicit */_Bool) (~(((/* implicit */int) arr_33 [14LL] [14LL] [i_10 + 4]))));
        var_25 = ((/* implicit */_Bool) (((~(((/* implicit */int) (unsigned short)18539)))) % (((((/* implicit */_Bool) arr_50 [i_10])) ? (((arr_3 [i_10 + 2]) - (((/* implicit */int) var_4)))) : ((~(((/* implicit */int) var_8))))))));
    }
    for (int i_14 = 2; i_14 < 13; i_14 += 3) /* same iter space */
    {
        arr_67 [i_14] = ((/* implicit */_Bool) arr_3 [i_14 - 1]);
        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_59 [i_14] [14LL] [14LL] [16])) ? (((((/* implicit */_Bool) arr_55 [12U])) ? (arr_27 [i_14]) : (((/* implicit */long long int) arr_35 [i_14])))) : (((/* implicit */long long int) ((/* implicit */int) (short)-20237)))))) ? ((+(((((/* implicit */_Bool) (short)23153)) ? (((/* implicit */long long int) 2040437262U)) : (var_10))))) : (((/* implicit */long long int) arr_3 [i_14 + 2]))));
    }
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_15 = 1; i_15 < 16; i_15 += 2) 
    {
        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_15 - 1])) ? (((/* implicit */int) (_Bool)1)) : (arr_35 [i_15 - 1]))))));
        var_28 = ((/* implicit */int) max((var_28), ((((!(((/* implicit */_Bool) -1752517429)))) ? (((/* implicit */int) arr_2 [i_15])) : (((/* implicit */int) var_8))))));
    }
    for (short i_16 = 0; i_16 < 20; i_16 += 3) 
    {
        var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_34 [i_16]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) 68717379584LL)))) : (((2040437261U) | (((/* implicit */unsigned int) 4094)))))))));
        arr_75 [i_16] = (-((((_Bool)0) ? (((/* implicit */int) arr_20 [i_16])) : (((/* implicit */int) (!(((/* implicit */_Bool) -1435653881))))))));
        arr_76 [i_16] = ((/* implicit */long long int) (-((+(((/* implicit */int) max((arr_34 [i_16]), (((/* implicit */unsigned short) (_Bool)1)))))))));
    }
    for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            for (short i_19 = 0; i_19 < 13; i_19 += 4) 
            {
                {
                    var_30 *= ((/* implicit */_Bool) (signed char)23);
                    /* LoopSeq 3 */
                    for (long long int i_20 = 1; i_20 < 11; i_20 += 4) 
                    {
                        arr_88 [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-19812))))) : (((/* implicit */int) (!(arr_33 [i_20] [i_20 - 1] [i_17 - 1]))))));
                        var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) (!(((/* implicit */_Bool) (-(max((((/* implicit */int) arr_21 [i_17 - 1] [i_17 - 1] [i_17] [i_17 - 1])), (arr_3 [i_18])))))))))));
                        var_32 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [i_17 - 1])) ? (((/* implicit */int) (unsigned short)13768)) : (((/* implicit */int) arr_38 [i_17 - 1] [i_17] [i_17 - 1])))) | (((/* implicit */int) ((arr_3 [i_17 - 1]) != (((/* implicit */int) arr_53 [i_17 - 1] [i_17 - 1])))))));
                        arr_89 [i_17] [i_18] [i_18] = ((/* implicit */int) min((max((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)57))))), (((long long int) 1753423951977329459LL)))), (((/* implicit */long long int) var_4))));
                        var_33 = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) 1893568890))) != (((/* implicit */int) ((unsigned char) (+(-1753423951977329459LL)))))));
                    }
                    for (unsigned char i_21 = 0; i_21 < 13; i_21 += 1) /* same iter space */
                    {
                        var_34 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (288230376151709696LL)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_86 [i_18]))))))), (min((((/* implicit */int) max((((/* implicit */unsigned char) arr_21 [i_17] [i_17] [i_17 - 1] [i_17 - 1])), ((unsigned char)249)))), (arr_35 [i_17 - 1])))));
                        arr_93 [i_17] [i_17] [1LL] [(signed char)12] [i_21] = (~(((((/* implicit */_Bool) -1055817977)) ? ((-(-288230376151709701LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_61 [i_19] [i_19] [i_19] [i_19]))))));
                        arr_94 [i_17] [i_17] = ((/* implicit */unsigned short) (((+(((/* implicit */int) ((signed char) arr_73 [i_21]))))) > (max((min((((/* implicit */int) (short)-20237)), (-167080481))), (max((737776559), (((/* implicit */int) (unsigned short)32791))))))));
                        arr_95 [i_17] [i_17] [i_17] [i_21] [i_21] = ((/* implicit */signed char) var_4);
                        var_35 = ((/* implicit */int) arr_59 [4LL] [4LL] [i_19] [i_17]);
                    }
                    /* vectorizable */
                    for (unsigned char i_22 = 0; i_22 < 13; i_22 += 1) /* same iter space */
                    {
                        arr_98 [i_22] [i_17] [i_17 - 1] [i_17] [i_17] [i_17 - 1] = ((/* implicit */_Bool) (-9223372036854775807LL - 1LL));
                        var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_17] [i_17 - 1] [i_19]))) : ((~(arr_14 [i_19] [i_22] [i_22] [(_Bool)1]))))))));
                        var_37 = ((/* implicit */int) (+((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32046))) : (-288230376151709696LL)))));
                        /* LoopSeq 2 */
                        for (unsigned char i_23 = 2; i_23 < 12; i_23 += 1) 
                        {
                            var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) (((!((_Bool)0))) ? (((/* implicit */int) arr_64 [i_17 - 1])) : (1349162201))))));
                            arr_101 [i_17] = ((/* implicit */_Bool) 1893568865);
                        }
                        for (unsigned char i_24 = 0; i_24 < 13; i_24 += 2) 
                        {
                            var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) ((long long int) arr_32 [i_17 - 1])))));
                            var_40 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((2040437240U) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                        }
                        arr_104 [i_17] [i_17] [i_19] [i_22] [i_17] = ((/* implicit */long long int) (unsigned char)108);
                    }
                    arr_105 [i_17] [(unsigned char)10] [i_19] = (i_17 % 2 == zero) ? (((/* implicit */signed char) ((((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)31))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 1681395917720720195LL)) && (((/* implicit */_Bool) -2079155406))))) : (((/* implicit */int) arr_55 [i_17])))) << (((max((((long long int) arr_52 [i_17] [i_17])), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)20237)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) - (61LL)))))) : (((/* implicit */signed char) ((((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)31))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 1681395917720720195LL)) && (((/* implicit */_Bool) -2079155406))))) : (((/* implicit */int) arr_55 [i_17])))) << (((((max((((long long int) arr_52 [i_17] [i_17])), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)20237)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) - (61LL))) - (30LL))))));
                }
            } 
        } 
        var_41 += ((/* implicit */unsigned char) max((((/* implicit */long long int) ((arr_28 [i_17] [i_17] [i_17]) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)-118)))))), (arr_29 [i_17] [i_17])));
    }
    for (long long int i_25 = 3; i_25 < 8; i_25 += 4) 
    {
        var_42 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_55 [(short)2]))))))));
        var_43 = ((/* implicit */int) max((var_43), (((/* implicit */int) (-((+(33554431LL))))))));
        var_44 = arr_87 [4] [i_25 - 2] [4] [4];
        arr_108 [(_Bool)1] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */long long int) (((-(2254530055U))) + (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) == (arr_12 [i_25])));
        arr_109 [i_25 + 2] [i_25 - 1] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((arr_21 [i_25 - 3] [i_25 - 1] [i_25 + 2] [i_25 + 3]) ? (248) : (((/* implicit */int) arr_72 [i_25 - 2]))))), (1681395917720720188LL)));
    }
    var_45 *= ((/* implicit */short) (+(((/* implicit */int) ((_Bool) ((int) var_4))))));
}
