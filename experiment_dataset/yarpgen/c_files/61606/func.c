/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61606
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        arr_11 [i_1] [10ULL] [i_1] [i_0] = ((/* implicit */unsigned long long int) (+(-4801112210046600920LL)));
                        var_12 = ((/* implicit */long long int) ((3072803197U) >> (((820440649U) - (820440646U)))));
                        var_13 = ((/* implicit */unsigned char) (((_Bool)1) ? (11946328719931562428ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6)))))));
                    }
                    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)9)))))));
                    /* LoopSeq 3 */
                    for (long long int i_4 = 1; i_4 < 13; i_4 += 3) /* same iter space */
                    {
                        var_15 -= ((/* implicit */unsigned long long int) max((min((962131764U), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_3)), (var_1))))));
                        var_16 = ((/* implicit */short) 3072803197U);
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))));
                            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 1222164095U)) || ((_Bool)1))))));
                        }
                        for (unsigned int i_6 = 3; i_6 < 12; i_6 += 4) 
                        {
                            var_19 ^= ((/* implicit */unsigned long long int) -8259643745416474488LL);
                            var_20 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_1)), (3072803185U)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) max((var_2), (var_2)))))));
                            var_21 = ((/* implicit */short) (-(((((-1694975333735197412LL) / (((/* implicit */long long int) ((/* implicit */int) var_3))))) % ((+(-4801112210046600929LL)))))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_22 = ((/* implicit */_Bool) min((((/* implicit */int) var_4)), ((-((-(((/* implicit */int) (unsigned char)111))))))));
                            var_23 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) max((var_6), (var_6)))), ((-(3072803197U)))));
                            var_24 = ((/* implicit */long long int) ((max((((/* implicit */long long int) var_0)), (-4801112210046600920LL))) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 8259643745416474488LL))))))));
                            var_25 ^= ((/* implicit */_Bool) min((max((2254960705564657344LL), (((/* implicit */long long int) (unsigned short)22800)))), ((~(((((/* implicit */long long int) ((/* implicit */int) var_10))) + (var_7)))))));
                        }
                        var_26 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 277076930199552ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (277076930199556ULL)))) || (((/* implicit */_Bool) max((((/* implicit */long long int) (-(0U)))), (min((-8259643745416474506LL), (((/* implicit */long long int) var_10))))))));
                    }
                    for (long long int i_8 = 1; i_8 < 13; i_8 += 3) /* same iter space */
                    {
                        var_27 ^= ((/* implicit */unsigned short) (-((~(((/* implicit */int) var_9))))));
                        var_28 = ((/* implicit */_Bool) min((min((((/* implicit */unsigned int) (short)0)), (3072803201U))), (((/* implicit */unsigned int) var_6))));
                        var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) (((((_Bool)0) || (((/* implicit */_Bool) 8851487225000457185ULL)))) || (((((/* implicit */int) (unsigned short)28815)) <= (((/* implicit */int) (short)-14)))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_30 *= ((/* implicit */short) (((~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)10)) && (((/* implicit */_Bool) (unsigned short)22804))))))) > (((/* implicit */int) (unsigned short)22811))));
                            var_31 *= ((/* implicit */_Bool) min((min((((/* implicit */unsigned short) var_4)), ((unsigned short)5))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (-4801112210046600925LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))))));
                        }
                        var_32 = ((/* implicit */_Bool) ((min((((/* implicit */int) ((var_11) <= (((/* implicit */int) (unsigned short)65535))))), ((~(((/* implicit */int) (unsigned short)42713)))))) % (((/* implicit */int) ((var_7) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -2470809665177221769LL)) && (((/* implicit */_Bool) (signed char)99)))))))))));
                    }
                    for (long long int i_10 = 1; i_10 < 13; i_10 += 3) /* same iter space */
                    {
                        var_33 ^= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_5)))))))) > (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (3986551355985842431LL)))));
                        var_34 = ((/* implicit */unsigned short) min((((/* implicit */unsigned char) (signed char)20)), ((unsigned char)224)));
                        var_35 *= ((/* implicit */long long int) ((((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned char) var_10))))) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)-105)) % (((/* implicit */int) var_0))))) : (min((((/* implicit */long long int) var_10)), (9223372036854775807LL))))) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)240)))));
                    }
                }
            } 
        } 
    } 
    var_36 = ((/* implicit */long long int) max((((/* implicit */unsigned short) var_6)), (var_0)));
    var_37 = ((/* implicit */unsigned short) (unsigned char)13);
}
