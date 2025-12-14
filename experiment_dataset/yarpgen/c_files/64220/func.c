/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64220
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
    var_18 = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) (-(1764777231U)))), (max((1059078480776805047ULL), (17387665592932746568ULL))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (short)-3857))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : ((+(1059078480776805030ULL)))))));
    var_19 = (!(((/* implicit */_Bool) var_10)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned char) ((17387665592932746568ULL) == (17387665592932746568ULL)))), (arr_3 [i_1 + 1] [i_1 + 1]))), (((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [(short)0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20373))) : (222180336542340789ULL))))))))));
                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) arr_5 [i_0] [i_1]))));
                /* LoopSeq 4 */
                for (int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_6 [i_1 + 1] [i_1 - 1]), (arr_6 [i_1 - 1] [i_1 - 1])))) ? (((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) 1059078480776805048ULL)))))) : (-6511833414781495197LL))))));
                    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (!((!((!(((/* implicit */_Bool) 0)))))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        var_24 ^= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 15232568839459421988ULL)) ? (((/* implicit */int) arr_4 [i_1] [i_2] [i_3])) : (0)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [i_1] [i_1 + 1] [i_2] [i_3]))))) : (arr_6 [7] [i_1 - 1]))), (((/* implicit */unsigned long long int) ((short) ((arr_11 [i_0] [i_0]) << (((14067705911139865436ULL) - (14067705911139865433ULL)))))))));
                        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((unsigned long long int) 2618894162962524102ULL))));
                        var_26 = (+((~(arr_5 [i_1 - 1] [i_1]))));
                        arr_12 [i_0] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */unsigned long long int) 2360658460155620395LL)) : (1059078480776805032ULL))) - (((/* implicit */unsigned long long int) (+(2197914712U)))))))));
                    }
                }
                for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) /* same iter space */
                {
                    var_27 = ((/* implicit */short) 1764777231U);
                    /* LoopSeq 3 */
                    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) ((signed char) max((18224563737167210826ULL), (((/* implicit */unsigned long long int) 1237753341)))));
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 4; i_6 < 10; i_6 += 3) 
                        {
                            var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) (unsigned short)22))));
                            var_30 = ((/* implicit */unsigned int) (-(max((((/* implicit */long long int) ((signed char) -1563584365))), (0LL)))));
                        }
                        /* LoopSeq 1 */
                        for (short i_7 = 2; i_7 < 12; i_7 += 3) 
                        {
                            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0] [i_1])) || (((/* implicit */_Bool) 18224563737167210806ULL)))))))) ? (((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) arr_9 [(signed char)2] [i_4] [i_5] [i_7])))))) : (((((/* implicit */_Bool) min((17387665592932746568ULL), (((/* implicit */unsigned long long int) 0))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -5466260767215479970LL)))))) : (arr_2 [i_0] [0LL] [i_0])))));
                            arr_22 [i_0] [i_1] [i_4] [i_4] [i_7] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) arr_10 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 - 1]))) * (((/* implicit */int) ((((/* implicit */int) (unsigned char)225)) > (arr_19 [i_7 + 1] [i_7]))))));
                            var_32 |= ((/* implicit */unsigned short) ((((((unsigned long long int) (short)7749)) != (((844424930131968ULL) | (((/* implicit */unsigned long long int) 3277550907U)))))) ? (((/* implicit */unsigned int) ((int) ((unsigned long long int) arr_11 [i_0] [i_0])))) : (((((/* implicit */_Bool) (-(arr_2 [1U] [i_1 + 1] [i_4])))) ? (1764777250U) : ((-(4294967270U)))))));
                            var_33 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((-695869666389575971LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)126)))))) ? (((/* implicit */unsigned long long int) (-(2080768U)))) : (arr_6 [i_1] [i_1 - 1])))));
                        }
                        var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-((+(1764777231U)))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) 3277550907U)))))) : (max((min((((/* implicit */unsigned int) arr_0 [i_0] [i_0])), (arr_5 [i_0] [i_0]))), (((/* implicit */unsigned int) ((unsigned char) arr_2 [i_4] [i_4] [i_4]))))))))));
                    }
                    for (long long int i_8 = 0; i_8 < 13; i_8 += 3) 
                    {
                        var_35 = ((/* implicit */unsigned char) arr_0 [i_4] [i_8]);
                        var_36 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)237)) || (((/* implicit */_Bool) max((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_8 [i_0] [9LL]))))), (arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 1]))))));
                        var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 0U)) ? (arr_21 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32130))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -1LL)) || (((/* implicit */_Bool) 4001313547U))))))))) ? (((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_7 [0ULL] [i_1 + 1] [i_4] [(signed char)2]))))))) : (((unsigned int) 119823585U))));
                        var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_1 - 1] [i_1] [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1])) ? (arr_24 [i_1 - 1] [(_Bool)1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) : (((/* implicit */long long int) 2097052584U))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_8])) && (((/* implicit */_Bool) 844424930131968ULL))))) >= (((/* implicit */int) ((signed char) 1429772333U))))))) : (max((((/* implicit */unsigned long long int) (+(-6865211369932067572LL)))), (((((/* implicit */_Bool) -958474553)) ? (9350930867933671866ULL) : (137438953471ULL)))))));
                    }
                    for (long long int i_9 = 1; i_9 < 10; i_9 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_10 = 0; i_10 < 13; i_10 += 2) 
                        {
                            var_39 = ((/* implicit */unsigned int) ((int) ((short) ((((/* implicit */long long int) -1316785432)) ^ (-1011334665621227164LL)))));
                            arr_32 [i_0] [i_1] [i_4] [i_4] [i_9] [i_10] = ((/* implicit */unsigned long long int) ((long long int) arr_5 [i_0] [i_0]));
                        }
                        for (unsigned int i_11 = 0; i_11 < 13; i_11 += 3) 
                        {
                            var_40 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_28 [i_0] [i_1] [(unsigned char)7] [i_9] [i_9])) ? (1764777231U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_4] [i_11]))))) << (((((0LL) | (5565077146830269446LL))) - (5565077146830269446LL)))))), ((~(((18446743936270598145ULL) | (((/* implicit */unsigned long long int) -976184194))))))));
                            arr_36 [i_0] = ((int) ((unsigned long long int) 1111259147));
                            var_41 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1252531706)))))) | (min((min((((/* implicit */unsigned long long int) arr_8 [i_4] [i_4])), (5714313172570907848ULL))), (((/* implicit */unsigned long long int) ((int) arr_5 [i_0] [(unsigned short)7])))))));
                        }
                        var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) min((((/* implicit */unsigned int) (-((+(((/* implicit */int) (unsigned char)32))))))), (max((((unsigned int) 1345738993)), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) (unsigned char)10)), (arr_14 [i_0] [i_0] [i_0])))))))))));
                    }
                    var_43 += ((/* implicit */short) ((((/* implicit */_Bool) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)185))) - (arr_21 [i_0]))))) ? (((int) 0ULL)) : ((-(((/* implicit */int) ((unsigned char) (signed char)-33)))))));
                }
                for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 4) /* same iter space */
                {
                    arr_40 [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_1 [i_1 - 1]) ? (max((arr_23 [(short)6] [(short)6] [i_1] [i_12]), (((/* implicit */long long int) (unsigned short)2289)))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)10)), (arr_20 [i_0] [i_0] [1ULL] [i_12] [i_12] [i_12] [(unsigned char)4])))))))) ? (((((/* implicit */_Bool) ((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_1 + 1] [(short)7])))))) ? (((((/* implicit */_Bool) 119823574U)) ? (12732430901138643768ULL) : (((/* implicit */unsigned long long int) arr_29 [i_1] [i_12])))) : (min((((/* implicit */unsigned long long int) arr_28 [i_12] [i_0] [i_1] [i_12] [i_0])), (17028404626829407775ULL))))) : ((-(arr_26 [i_1] [i_1 + 1] [i_1] [(short)10])))));
                    var_44 = ((/* implicit */signed char) min((((((/* implicit */_Bool) 1675281857)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21679))) : (arr_30 [i_1 + 1] [i_1] [i_1 + 1] [i_1 - 1]))), (((((/* implicit */_Bool) (signed char)-71)) ? (arr_30 [i_1 + 1] [i_1] [i_1] [i_1 - 1]) : (arr_30 [i_1 + 1] [i_1] [i_1] [i_1 - 1])))));
                    var_45 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((signed char) ((arr_23 [i_0] [i_1] [i_1] [i_12]) | (((/* implicit */long long int) -976184194)))))), (((((/* implicit */_Bool) (+(2946440384995478619ULL)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)32))) / (4175143710U))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((short)16459), (((/* implicit */short) arr_3 [1ULL] [i_1 - 1]))))))))));
                }
                for (unsigned short i_13 = 0; i_13 < 13; i_13 += 2) 
                {
                    var_46 = ((/* implicit */unsigned char) max((var_46), (((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */_Bool) -5195157959451085542LL)) || (((/* implicit */_Bool) (~(8602523418573121783ULL))))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)93))))) ? (((/* implicit */int) ((_Bool) (short)-7324))) : (((((/* implicit */_Bool) 15446486077056431874ULL)) ? (((/* implicit */int) (unsigned char)232)) : (((/* implicit */int) (short)4064)))))))))));
                    arr_44 [i_0] [i_1] [i_13] [i_13] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_15 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 + 1])))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)18265))))) : (((unsigned int) 1881538089U))));
                    var_47 = ((/* implicit */unsigned long long int) max((var_47), (((((/* implicit */unsigned long long int) ((729891006U) & (((/* implicit */unsigned int) (~(((/* implicit */int) (short)16462)))))))) ^ ((((~(5714313172570907846ULL))) ^ (((/* implicit */unsigned long long int) (~(arr_28 [i_0] [i_0] [i_1] [i_13] [9LL]))))))))));
                }
                var_48 = ((/* implicit */int) max((var_48), (((/* implicit */int) min((((arr_28 [i_0] [i_0] [i_0] [i_1 - 1] [i_1 - 1]) * (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_0] [i_1 - 1] [i_1]))))), ((+(-1055595312442262911LL))))))));
                var_49 = ((/* implicit */unsigned short) arr_16 [i_0] [i_1] [i_1] [i_1]);
            }
        } 
    } 
    var_50 = ((/* implicit */_Bool) min((var_50), (((/* implicit */_Bool) min((((/* implicit */long long int) (+(((/* implicit */int) min((((/* implicit */short) var_9)), ((short)16457))))))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)223))) / (((long long int) var_10)))))))));
}
