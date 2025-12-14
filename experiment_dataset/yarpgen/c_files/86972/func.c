/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86972
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
    var_17 = ((/* implicit */_Bool) var_14);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */int) arr_0 [i_0 + 2])) : (((/* implicit */int) arr_0 [i_0 + 1])))) | (((((/* implicit */int) arr_0 [i_0 + 2])) | (((/* implicit */int) (short)6722))))));
        /* LoopNest 3 */
        for (long long int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                for (unsigned int i_3 = 3; i_3 < 19; i_3 += 3) 
                {
                    {
                        arr_13 [i_1 - 1] = min((((/* implicit */short) arr_3 [i_0] [i_3 + 1])), ((short)6721));
                        /* LoopSeq 3 */
                        for (int i_4 = 2; i_4 < 21; i_4 += 3) /* same iter space */
                        {
                            var_19 = ((/* implicit */unsigned short) 4046286942632285605ULL);
                            var_20 = ((/* implicit */int) (_Bool)0);
                            var_21 = ((/* implicit */int) var_13);
                            var_22 = ((/* implicit */short) 1651683659U);
                        }
                        for (int i_5 = 2; i_5 < 21; i_5 += 3) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned short) (~(max((((((/* implicit */_Bool) arr_18 [i_0 + 2] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)129))) : (14400457131077266034ULL))), (((/* implicit */unsigned long long int) (unsigned char)24))))));
                            var_24 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)151)), (arr_6 [i_1 + 1] [i_0 - 1])))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) arr_11 [i_0 - 1] [i_0 + 2])) ? (((/* implicit */int) ((((/* implicit */_Bool) -1154750161)) || (((/* implicit */_Bool) arr_7 [i_5] [i_2] [i_2] [i_0]))))) : (((/* implicit */int) min(((unsigned short)26334), (((/* implicit */unsigned short) arr_19 [i_2] [i_2] [i_3] [i_3] [i_5] [i_5 - 2] [i_5 - 1])))))))));
                            var_25 = ((/* implicit */int) max((var_25), (((((/* implicit */_Bool) 4411140462838247422ULL)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) > (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65040))) % (var_3)))))) : (((/* implicit */int) var_0))))));
                            var_26 = ((/* implicit */unsigned short) (_Bool)1);
                            var_27 = ((/* implicit */int) min((((((/* implicit */_Bool) arr_0 [i_1 + 1])) || (((/* implicit */_Bool) arr_7 [i_3 - 3] [i_3 - 3] [i_3 + 4] [i_3])))), (((((/* implicit */int) (unsigned char)126)) == ((-(((/* implicit */int) (short)32760))))))));
                        }
                        /* vectorizable */
                        for (int i_6 = 2; i_6 < 21; i_6 += 3) /* same iter space */
                        {
                            arr_22 [i_0] [i_2] [i_3 - 3] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967279U)) ? ((((_Bool)1) ? (var_7) : (((/* implicit */long long int) arr_5 [i_1] [i_2] [i_6 - 2])))) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_2] [i_6 + 1] [(short)18] [i_3 + 2] [i_1 - 1] [i_0] [i_2])))));
                            var_28 = ((/* implicit */unsigned short) ((unsigned char) arr_16 [i_0] [i_0 + 1] [i_0] [i_0] [i_0 - 1] [i_3]));
                            var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2643938435U)) ? (((/* implicit */int) arr_19 [i_2] [(short)20] [i_2] [i_3 - 2] [i_3 - 2] [i_6] [i_6 - 1])) : (((/* implicit */int) (unsigned short)39202))))) ? (((/* implicit */int) var_8)) : (-2147483639)));
                            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0 + 2] [i_1 - 1])) ? (2147483640) : (var_5)));
                            var_31 = ((/* implicit */int) arr_19 [i_2] [i_2] [i_2] [i_1] [i_2] [i_3] [i_1]);
                        }
                        /* LoopSeq 2 */
                        for (short i_7 = 0; i_7 < 23; i_7 += 2) 
                        {
                            var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((((_Bool) arr_1 [i_2] [i_1])) ? (arr_10 [i_7] [i_2] [i_1] [i_0 + 1]) : (((/* implicit */unsigned int) (+(arr_11 [i_2] [i_7])))))) : (min((arr_4 [20] [i_2]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (unsigned short)50758))))))))))));
                            arr_26 [i_0] [i_0] [5U] [i_0] [i_3] [i_0] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)72)) ^ (-1154750161)));
                        }
                        for (short i_8 = 0; i_8 < 23; i_8 += 1) 
                        {
                            var_33 = ((/* implicit */long long int) var_15);
                            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [(short)6] [(short)6])) ? (((/* implicit */int) min((arr_16 [i_8] [i_8] [i_8] [i_8] [i_8] [i_3 - 2]), (arr_16 [i_8] [i_8] [i_8] [i_3 + 2] [i_3] [i_3 - 2])))) : (((/* implicit */int) ((-6429539424339081320LL) != (((/* implicit */long long int) -2147483639)))))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned int i_9 = 1; i_9 < 22; i_9 += 1) 
                        {
                            var_35 = ((/* implicit */short) ((((/* implicit */_Bool) 2643283637U)) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1651683659U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)1752))))), (((14400457131077266034ULL) | (((/* implicit */unsigned long long int) arr_30 [i_0 + 2] [i_0 + 2] [i_2] [i_0] [i_9] [i_0] [12U])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                            arr_32 [i_0] [i_1 - 1] [i_2] [17LL] [i_1 - 1] |= ((/* implicit */unsigned long long int) ((min((((arr_30 [i_0] [(_Bool)1] [i_0 + 1] [i_0] [i_0] [i_0] [i_0 - 1]) / (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) max((((/* implicit */int) var_0)), (arr_24 [i_3])))))) / (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_1 - 1] [i_2])))));
                            var_36 = ((/* implicit */unsigned short) (_Bool)1);
                        }
                        /* vectorizable */
                        for (signed char i_10 = 1; i_10 < 21; i_10 += 2) /* same iter space */
                        {
                            var_37 = ((/* implicit */long long int) (_Bool)1);
                            var_38 = ((/* implicit */long long int) ((short) 549755813887LL));
                            var_39 -= ((/* implicit */unsigned short) ((short) (short)(-32767 - 1)));
                        }
                        /* vectorizable */
                        for (signed char i_11 = 1; i_11 < 21; i_11 += 2) /* same iter space */
                        {
                            var_40 = ((/* implicit */unsigned long long int) (short)-18300);
                            var_41 -= ((/* implicit */short) arr_27 [i_3 + 3] [i_3] [i_3 - 3] [i_11] [i_11] [i_11]);
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (short i_12 = 4; i_12 < 20; i_12 += 3) 
        {
            for (int i_13 = 0; i_13 < 23; i_13 += 4) 
            {
                for (signed char i_14 = 2; i_14 < 19; i_14 += 2) 
                {
                    {
                        var_42 = ((/* implicit */unsigned long long int) (unsigned char)241);
                        var_43 = ((/* implicit */long long int) (_Bool)1);
                    }
                } 
            } 
        } 
        var_44 = ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))), (var_11)));
    }
    for (unsigned short i_15 = 1; i_15 < 21; i_15 += 4) /* same iter space */
    {
        var_45 = ((/* implicit */_Bool) max((var_45), (((/* implicit */_Bool) var_2))));
        /* LoopSeq 1 */
        for (short i_16 = 2; i_16 < 21; i_16 += 3) 
        {
            arr_52 [i_15] = ((/* implicit */unsigned int) arr_5 [i_16] [i_15] [i_15 + 1]);
            /* LoopNest 3 */
            for (unsigned short i_17 = 2; i_17 < 20; i_17 += 3) 
            {
                for (int i_18 = 0; i_18 < 23; i_18 += 3) 
                {
                    for (unsigned int i_19 = 3; i_19 < 22; i_19 += 3) 
                    {
                        {
                            var_46 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-22)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 364610876)) ? (((/* implicit */int) (short)-16384)) : (((/* implicit */int) (signed char)1)))))))), (((((/* implicit */_Bool) var_7)) ? (((-3224148324508454045LL) | (arr_30 [i_15 + 1] [i_16 - 1] [i_17] [i_18] [i_19] [i_15] [i_15]))) : (((var_3) & (((/* implicit */long long int) ((/* implicit */int) var_14)))))))));
                            var_47 = ((/* implicit */int) min((384820709U), (((/* implicit */unsigned int) (short)-2239))));
                            var_48 = ((/* implicit */unsigned char) max((var_48), (((/* implicit */unsigned char) min((arr_41 [i_16 + 2] [i_17 + 3] [i_15 + 2] [i_17 - 2]), (((/* implicit */unsigned long long int) arr_49 [i_15 - 1] [i_16 + 2])))))));
                        }
                    } 
                } 
            } 
        }
    }
    /* LoopNest 2 */
    for (unsigned short i_20 = 4; i_20 < 14; i_20 += 3) 
    {
        for (_Bool i_21 = 0; i_21 < 0; i_21 += 1) 
        {
            {
                var_49 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_16 [i_21 + 1] [i_21 + 1] [i_21] [(_Bool)1] [20ULL] [i_20])) + (((/* implicit */int) arr_44 [9U] [i_21] [i_20] [i_20 - 2] [(signed char)13] [i_21]))));
                var_50 -= ((/* implicit */short) min((((/* implicit */unsigned short) var_9)), ((unsigned short)0)));
                arr_69 [i_20] = ((/* implicit */unsigned long long int) arr_66 [i_20] [i_21]);
                var_51 = ((/* implicit */int) min((var_51), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 6429539424339081320LL)) ? (-549755813887LL) : (((/* implicit */long long int) ((/* implicit */int) arr_54 [i_20] [i_20 + 2] [i_21] [i_21]))))) % (((/* implicit */long long int) 3251641811U))))) + (max((((((/* implicit */_Bool) var_4)) ? (arr_2 [i_20 + 3] [i_20] [i_20 - 2]) : (12323604671122627063ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)39202)), (arr_24 [20])))))))))));
                var_52 = ((/* implicit */short) min((var_52), (((/* implicit */short) (unsigned short)16))));
            }
        } 
    } 
}
