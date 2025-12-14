/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95482
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
    var_11 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (short)14638)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-14639))) : (var_7))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (-6863839220830900712LL) : (((/* implicit */long long int) ((/* implicit */int) (short)0))));
    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((unsigned long long int) var_9)))));
    var_13 = ((/* implicit */unsigned int) ((long long int) (((((_Bool)1) ? (3419721594U) : (71585565U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((short) (short)-14639)))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned char) max((((((((/* implicit */int) arr_1 [i_0])) >= (((/* implicit */int) arr_1 [i_0])))) ? (((unsigned long long int) arr_2 [i_0] [i_0])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5))))))), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_15 = ((/* implicit */unsigned int) ((arr_4 [i_0 - 1] [i_0 + 1]) | (arr_4 [i_0 - 1] [i_0 - 1])));
            /* LoopSeq 2 */
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((unsigned int) (short)-14639)))));
                var_17 &= ((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_0 - 1] [i_0 + 1]));
            }
            for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_4 = 0; i_4 < 19; i_4 += 3) 
                {
                    arr_14 [i_4] [i_3] [i_1] [i_0] &= ((/* implicit */unsigned long long int) ((arr_10 [i_0 - 1] [i_0 + 1]) / (arr_10 [i_4] [i_3])));
                    arr_15 [i_0] [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned int) ((short) arr_6 [i_0 + 1]));
                }
                arr_16 [i_0 - 1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0 + 1])) ? (((/* implicit */int) arr_8 [i_0 + 1])) : ((((_Bool)1) ? (((/* implicit */int) (short)14638)) : (((/* implicit */int) (unsigned short)395))))));
                var_18 = ((/* implicit */unsigned char) ((unsigned long long int) arr_0 [i_0 - 1]));
            }
            var_19 = ((/* implicit */unsigned int) var_1);
        }
        /* LoopSeq 3 */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) << (((arr_0 [i_5]) - (16128078197200857797ULL)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 511LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_1 [i_5]))))) ? (((((/* implicit */int) var_0)) & (((/* implicit */int) var_5)))) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) -6863839220830900712LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16384))) : (875245701U)))) * ((-(511LL)))))));
            /* LoopSeq 2 */
            for (unsigned char i_6 = 0; i_6 < 19; i_6 += 3) 
            {
                var_21 ^= ((/* implicit */_Bool) max((((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned short) (unsigned char)61))))) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_6])) ? (var_10) : (((/* implicit */unsigned long long int) arr_22 [i_0] [i_5] [14ULL])))) : (((arr_6 [i_0]) & (var_10))))), (min((((/* implicit */unsigned long long int) var_3)), (((unsigned long long int) var_8))))));
                arr_24 [i_0] [i_0] [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) ((arr_9 [i_5 - 1] [i_6] [i_0 - 1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) | (((((/* implicit */int) (unsigned short)56798)) << (((614200479U) - (614200468U)))))));
                var_22 = ((/* implicit */long long int) min((((((/* implicit */unsigned int) (+(((/* implicit */int) var_9))))) * (((var_9) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0 + 1]))))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_0 - 1])) * (((/* implicit */int) var_0)))))));
            }
            for (long long int i_7 = 0; i_7 < 19; i_7 += 3) 
            {
                arr_27 [i_7] = ((/* implicit */long long int) max((((17558303329373451191ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4050702747U)))))));
                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (6863839220830900712LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (min((arr_19 [i_5] [i_5 - 1]), (((/* implicit */long long int) arr_1 [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned char)189))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((unsigned long long int) (-(((/* implicit */int) var_4)))))));
            }
            arr_28 [17LL] [17LL] [i_0] |= ((/* implicit */unsigned int) (((((~(((/* implicit */int) var_9)))) < (((/* implicit */int) var_9)))) ? (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) < (244264548U))))) : ((-((-(arr_9 [i_5] [(unsigned short)9] [(unsigned short)9])))))));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            arr_31 [i_8] = min((arr_8 [i_0 - 1]), (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) != (var_10))))) <= (((long long int) var_2)))));
            var_24 |= (-(((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (unsigned char)61)) ? (arr_9 [i_0 - 1] [i_0 - 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_9 = 0; i_9 < 19; i_9 += 3) 
            {
                arr_35 [i_8] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (_Bool)1))) ? (-510243875687174783LL) : (((((/* implicit */_Bool) (unsigned char)67)) ? (((/* implicit */long long int) 3825748329U)) : (-5577152341180531517LL)))));
                arr_36 [i_0] [i_8] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) var_7))) ? ((-(((/* implicit */int) var_1)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_33 [i_9] [i_9] [i_9] [i_9])))))));
            }
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_10 [i_0] [i_0])))) != (((unsigned long long int) arr_29 [i_0] [15ULL])))), ((!(((/* implicit */_Bool) (unsigned short)60302)))))))));
            var_26 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) (short)28743)) != (((/* implicit */int) var_6))))), (var_7)));
            /* LoopSeq 3 */
            for (long long int i_11 = 0; i_11 < 19; i_11 += 3) 
            {
                var_27 = ((/* implicit */_Bool) ((unsigned int) ((unsigned int) arr_17 [i_0])));
                var_28 = ((/* implicit */unsigned long long int) ((_Bool) min((((/* implicit */long long int) var_9)), (-6863839220830900712LL))));
                var_29 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((long long int) arr_13 [i_0 + 1]))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_2)))))) | (17102981912199269117ULL)))));
                /* LoopSeq 1 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    arr_47 [i_12] [i_10] [i_10] [(short)16] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6863839220830900712LL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_0 + 1] [i_0 + 1] [i_0 + 1])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_0 - 1] [i_0] [i_10])))))) : (((0U) | (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0 - 1]))) != (232860622U)))) * (((((/* implicit */_Bool) arr_17 [i_0 - 1])) ? (((/* implicit */int) arr_17 [i_0 - 1])) : (((/* implicit */int) arr_17 [i_0 + 1]))))));
                    arr_48 [i_0] [i_10] [i_10] [i_10] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) min((var_5), (var_0)))) ? (((/* implicit */int) (short)(-32767 - 1))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_18 [i_0] [i_10] [i_11])))))) & (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_0] [i_10]))) | (5577152341180531516LL))) > (((/* implicit */long long int) ((/* implicit */int) ((arr_20 [i_0 - 1] [i_0 - 1]) == (((/* implicit */long long int) ((/* implicit */int) var_4))))))))))));
                    var_31 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (~(((/* implicit */int) (short)-14514))))) ? (0ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5577152341180531516LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (1344696827U)))))) < (((((((/* implicit */_Bool) (unsigned char)67)) ? (4173491246801229772ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) var_3)) < (var_7)))))))));
                }
            }
            for (unsigned long long int i_13 = 2; i_13 < 17; i_13 += 3) 
            {
                arr_53 [i_10] [i_0] = ((/* implicit */unsigned short) (((+((+(1344696827U))))) << (((long long int) ((3153396623U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)120))))))));
                arr_54 [i_0] [i_10] = ((/* implicit */unsigned int) (~(335103077476008285ULL)));
                /* LoopSeq 1 */
                for (unsigned long long int i_14 = 0; i_14 < 19; i_14 += 4) 
                {
                    var_32 = ((/* implicit */unsigned int) arr_23 [i_10]);
                    /* LoopSeq 1 */
                    for (short i_15 = 0; i_15 < 19; i_15 += 3) 
                    {
                        arr_59 [i_0] [i_10] [(_Bool)1] [i_0] [2U] [(_Bool)1] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_58 [i_13 + 2] [i_10] [i_13] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0])) ? (((/* implicit */int) arr_58 [i_13 - 2] [i_10] [i_13] [i_0 - 1] [i_0 - 1] [i_13 + 2] [i_13 - 2])) : (((/* implicit */int) var_6))))));
                        arr_60 [i_10] [i_13 - 1] [i_14] = ((/* implicit */unsigned char) min(((((_Bool)0) ? (((((/* implicit */_Bool) (unsigned short)33234)) ? (((/* implicit */unsigned long long int) 6333695605143018668LL)) : (14273252826908321844ULL))) : (max((8868345883097171934ULL), (15271367277330174461ULL))))), (((/* implicit */unsigned long long int) (unsigned short)0))));
                    }
                    var_33 = ((/* implicit */unsigned short) (+((((+(var_3))) + ((-(2950270468U)))))));
                    arr_61 [i_10] [i_0] [i_0] [i_0 - 1] [i_0] = ((/* implicit */_Bool) min(((((-(1227059299U))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [(unsigned char)11] [8U])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))))), (((/* implicit */unsigned int) ((_Bool) ((unsigned int) (_Bool)0))))));
                    var_34 -= ((/* implicit */unsigned int) max((((/* implicit */long long int) ((short) var_4))), ((-(var_7)))));
                }
            }
            for (unsigned int i_16 = 0; i_16 < 19; i_16 += 2) 
            {
                arr_64 [i_0] [i_10] = ((/* implicit */long long int) ((unsigned long long int) ((arr_8 [i_0 + 1]) ? (1411642304U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))));
                var_35 = ((/* implicit */_Bool) ((min((12656572545613220889ULL), (((/* implicit */unsigned long long int) var_2)))) | (((/* implicit */unsigned long long int) 2950270468U))));
                var_36 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_6 [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (1344696827U))))) : (((((/* implicit */_Bool) arr_41 [i_0] [i_0 - 1] [i_10] [i_16])) ? (15021538846091647008ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
                arr_65 [i_0] [i_0 - 1] [i_0 - 1] [i_10] = ((/* implicit */short) min(((~(((arr_21 [i_10]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0]))))))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)2331)) << (((((/* implicit */int) (unsigned short)46894)) - (46888))))))));
            }
        }
        var_37 &= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((long long int) (_Bool)1))), ((+(arr_44 [0U])))));
    }
    for (unsigned int i_17 = 1; i_17 < 18; i_17 += 4) /* same iter space */
    {
        arr_69 [10U] [i_17] = ((((/* implicit */_Bool) (short)31964)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (0ULL));
        arr_70 [i_17] [i_17] = var_10;
        arr_71 [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)22398)) : (((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_17] [i_17]))) : (var_2)))) : ((~(6864247853497538204LL)))))) ? (arr_38 [(short)12]) : (((/* implicit */unsigned long long int) ((unsigned int) (short)-27109)))));
        var_38 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_9)) > (((/* implicit */int) var_5)))))) == (max((((/* implicit */unsigned int) (short)31964)), (1344696827U)))));
    }
    for (unsigned int i_18 = 1; i_18 < 18; i_18 += 4) /* same iter space */
    {
        arr_75 [i_18] = (i_18 % 2 == zero) ? (((/* implicit */long long int) min((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))))), (min((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_23 [i_18])) + (2147483647))) >> (((((/* implicit */int) arr_51 [i_18])) + (26225)))))), (arr_41 [i_18 - 1] [i_18] [i_18] [i_18])))))) : (((/* implicit */long long int) min((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))))), (min((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_23 [i_18])) + (2147483647))) >> (((((((/* implicit */int) arr_51 [i_18])) + (26225))) - (28583)))))), (arr_41 [i_18 - 1] [i_18] [i_18] [i_18]))))));
        arr_76 [i_18] [i_18] = ((/* implicit */short) var_4);
        var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) -6541658284796771269LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 9529880898468363963ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)31964))) : (-6864247853497538204LL)))))))));
    }
    var_40 = ((/* implicit */long long int) var_0);
}
