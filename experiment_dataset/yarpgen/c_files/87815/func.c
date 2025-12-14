/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87815
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
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned int) ((min((((1138913005175084169LL) & (((/* implicit */long long int) ((/* implicit */int) var_0))))), (((/* implicit */long long int) (_Bool)1)))) ^ ((((~(var_5))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) 3319444192618856390ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)(-32767 - 1))))))))));
        var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)0))));
        var_20 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) min((281474976710655ULL), (0ULL)))) ? (((((/* implicit */int) (unsigned short)33593)) ^ (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (short)-389))))), (((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)128))) ? (((((/* implicit */_Bool) arr_1 [(unsigned short)9] [i_0])) ? (-1138913005175084170LL) : (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) ((int) 18446744073709551612ULL)))))));
        var_21 = ((/* implicit */unsigned long long int) (unsigned short)31943);
        var_22 = ((unsigned char) var_7);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            var_23 = ((/* implicit */short) arr_3 [17] [i_1]);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    {
                        var_24 = ((/* implicit */unsigned short) ((arr_14 [i_4] [5LL] [i_3] [i_1] [i_1]) ? (((/* implicit */int) arr_14 [i_4] [i_2] [i_2] [i_4] [(unsigned char)9])) : (((/* implicit */int) var_7))));
                        var_25 = ((/* implicit */short) var_15);
                        var_26 = (!(((/* implicit */_Bool) arr_4 [i_3] [i_4])));
                    }
                } 
            } 
            var_27 = ((/* implicit */unsigned long long int) ((int) var_10));
            var_28 = ((/* implicit */unsigned int) 281474976710655ULL);
        }
        var_29 = ((/* implicit */unsigned short) ((unsigned long long int) var_6));
        var_30 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1]))));
        var_31 = ((/* implicit */_Bool) 995232216U);
        var_32 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)112)) && (((/* implicit */_Bool) 0LL))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 2) /* same iter space */
    {
        var_33 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_5] [i_5])) ? (((/* implicit */int) (unsigned char)224)) : (arr_4 [i_5] [i_5])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_5] [i_5]))) : (var_1))));
        var_34 += ((max((((/* implicit */unsigned long long int) (_Bool)0)), (281474976710653ULL))) & (((/* implicit */unsigned long long int) ((arr_16 [i_5]) - (arr_16 [i_5])))));
        var_35 = ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) (short)389)), (3410790679248432676ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_5] [i_5])) ? (((/* implicit */int) arr_6 [i_5] [i_5])) : (((/* implicit */int) arr_6 [i_5] [i_5])))))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 2) /* same iter space */
    {
        var_36 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) var_11)) || ((!(((/* implicit */_Bool) (short)-389))))))) << (((((unsigned int) 1138913005175084169LL)) - (260609145U)))));
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 1) 
        {
            for (int i_8 = 0; i_8 < 24; i_8 += 1) 
            {
                {
                    var_37 &= 412316860416ULL;
                    /* LoopSeq 2 */
                    for (unsigned long long int i_9 = 3; i_9 < 23; i_9 += 2) 
                    {
                        var_38 = ((/* implicit */_Bool) ((((arr_26 [i_9 - 2] [i_9 - 3] [i_9 + 1] [i_9 + 1] [i_9 - 2] [i_9 - 3]) < (arr_26 [i_9 - 3] [i_9 - 1] [i_9 - 3] [i_9 - 2] [i_9 - 1] [i_9 - 3]))) ? ((-(arr_26 [i_9 - 2] [i_9 - 2] [i_9 - 3] [i_9 - 1] [i_9 - 2] [i_9 - 2]))) : (min((arr_26 [i_9 - 2] [i_9 - 2] [i_9 - 1] [i_9 - 3] [i_9 - 1] [i_9 + 1]), (arr_26 [i_9 + 1] [i_9 - 3] [i_9 - 2] [i_9 + 1] [i_9 - 2] [i_9 - 1])))));
                        var_39 = ((/* implicit */signed char) ((((/* implicit */int) (short)-389)) ^ (((/* implicit */int) (unsigned char)13))));
                    }
                    for (unsigned char i_10 = 3; i_10 < 23; i_10 += 2) 
                    {
                        var_40 = ((/* implicit */int) ((unsigned char) min((arr_17 [i_8]), (arr_17 [i_6]))));
                        var_41 = ((/* implicit */unsigned long long int) ((signed char) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_12))))), ((unsigned short)65519))));
                        var_42 = ((/* implicit */unsigned char) (-((-(913398619)))));
                        var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_6] [i_8] [i_10 - 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((unsigned char) arr_15 [i_6])))))) || (((/* implicit */_Bool) var_8))));
                    }
                    var_44 = ((/* implicit */short) ((((/* implicit */_Bool) min((max((((/* implicit */long long int) var_12)), (var_5))), (((/* implicit */long long int) ((arr_17 [i_6]) && (((/* implicit */_Bool) (unsigned char)32)))))))) ? (((unsigned long long int) (short)-20496)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1275195097U)) ? (529210530539578973ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))))) ? (((/* implicit */int) (unsigned char)165)) : (((/* implicit */int) (_Bool)0)))))));
                    var_45 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)99)) ? (((/* implicit */int) (short)388)) : (-357780570)))) ? (((((/* implicit */int) var_4)) - (((/* implicit */int) arr_6 [9] [i_8])))) : (((/* implicit */int) min(((short)9252), (((/* implicit */short) arr_6 [i_7] [i_7])))))));
                }
            } 
        } 
    }
    var_46 *= ((/* implicit */unsigned long long int) var_3);
    var_47 = ((/* implicit */unsigned long long int) (+(min((1098200670), (((((/* implicit */int) var_14)) & (((/* implicit */int) var_3))))))));
    var_48 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (((_Bool)1) && (var_17)))), (((((/* implicit */_Bool) ((((/* implicit */int) (short)389)) | (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((0U) << (((((/* implicit */int) (unsigned short)19768)) - (19737)))))) : (var_9)))));
    var_49 = ((/* implicit */unsigned char) ((signed char) min((((/* implicit */unsigned long long int) (~(var_13)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) - (17310235840513641388ULL))))));
}
