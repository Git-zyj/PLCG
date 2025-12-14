/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71097
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 2; i_3 < 10; i_3 += 4) /* same iter space */
                    {
                        arr_11 [i_1] [i_1] [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) ((15159363788241850398ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                        var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 567453553048682496ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1024))) : (-8926296479416220035LL))) >> (((((((/* implicit */_Bool) 14389285739295634803ULL)) ? (17879290520660869120ULL) : (1152886320234758144ULL))) - (17879290520660869062ULL))))))));
                    }
                    for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 4) /* same iter space */
                    {
                        var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) (+((-(max((((/* implicit */unsigned int) (unsigned short)1023)), (var_9))))))))));
                        var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) ((_Bool) 1073741824U))) >= (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)56))))))) >> (((/* implicit */int) max((((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_0))) < (1152921496016912384LL)))), ((short)-256))))));
                        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (+(((/* implicit */int) (signed char)8)))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_5 = 2; i_5 < 10; i_5 += 4) /* same iter space */
                    {
                        var_15 += ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)64527))) ^ (var_2))) >= (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) 9223372036854775808ULL))) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) ((signed char) (unsigned short)480)))));
                        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)247)))))));
                    }
                    var_18 += ((/* implicit */signed char) (+(min(((~(((/* implicit */int) (signed char)(-127 - 1))))), (((((/* implicit */int) (signed char)-126)) + (((/* implicit */int) (unsigned short)23397))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_6 = 1; i_6 < 10; i_6 += 4) 
        {
            for (unsigned long long int i_7 = 1; i_7 < 10; i_7 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 1205829739635958266LL)) ? (9206007802560549079LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)110))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (5563098510513877730ULL) : (1099511627744ULL)))) ? (((/* implicit */int) (short)-14605)) : (((/* implicit */int) (signed char)(-127 - 1))))))));
                    /* LoopSeq 3 */
                    for (long long int i_8 = 1; i_8 < 8; i_8 += 3) /* same iter space */
                    {
                        var_20 = ((/* implicit */signed char) ((((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) 8128634868846122418LL))))) | (((((/* implicit */_Bool) (signed char)57)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)486))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned long long int i_9 = 1; i_9 < 10; i_9 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1152921496016912385LL)) ? (18014398509481952ULL) : (9672799553514916058ULL)));
                            arr_26 [i_0] [i_6 + 1] [i_7] [(signed char)6] = ((/* implicit */signed char) (unsigned char)20);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 1) /* same iter space */
                        {
                            arr_30 [i_0] [i_0] [i_0] [0LL] [2LL] [i_0] [i_10] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -9206007802560549090LL)) ? (-8619910465055983207LL) : (-1205829739635958269LL))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) 18172664353732658382ULL))))))));
                            var_22 = ((((((/* implicit */_Bool) -7439209309553377336LL)) ? (909981709720620056ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20644))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 18172664353732658375ULL)))))));
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) <= (var_3)))) != (((((/* implicit */_Bool) (signed char)-26)) ? (((/* implicit */int) (signed char)25)) : (((/* implicit */int) (signed char)-55)))))))));
                            var_24 = ((/* implicit */long long int) min((var_24), (((((9206007802560549077LL) - (var_2))) >> (((/* implicit */int) ((((/* implicit */int) (signed char)26)) <= (((/* implicit */int) (unsigned short)32640)))))))));
                            var_25 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((var_9) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-28)))))) | (14274564012439388021ULL)));
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 1) /* same iter space */
                        {
                            var_26 *= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)-39)), (((((/* implicit */int) (signed char)60)) & (((/* implicit */int) (signed char)-26))))))), (max((((((/* implicit */_Bool) (signed char)-76)) ? (13628525211219170278ULL) : (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8)))))))));
                            var_27 = ((/* implicit */_Bool) (unsigned char)28);
                        }
                        var_28 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)231))) ? ((-(((/* implicit */int) (signed char)-18)))) : (((/* implicit */int) ((4818218862490381326ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_12 = 2; i_12 < 11; i_12 += 1) 
                        {
                            arr_37 [i_12 - 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)30)) ^ (((/* implicit */int) (signed char)-18)))))));
                            var_29 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3603312520048812297ULL)) ? (((((/* implicit */_Bool) 3687611368U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (10990963022499412631ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0)))))));
                        }
                        for (signed char i_13 = 4; i_13 < 10; i_13 += 1) 
                        {
                            var_30 = ((/* implicit */signed char) var_6);
                            var_31 |= ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)244)) / (((/* implicit */int) (signed char)-18))))) ? (((/* implicit */int) min(((signed char)70), ((signed char)12)))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)18)) && (((/* implicit */_Bool) (unsigned char)189))))))) >= (((((/* implicit */int) min((var_10), (((/* implicit */unsigned short) (signed char)66))))) | (((/* implicit */int) (unsigned short)23711))))));
                        }
                        var_32 = (-((((!(((/* implicit */_Bool) 16777088U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)26))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16380))) : (14843431553660739318ULL))))));
                    }
                    for (long long int i_14 = 1; i_14 < 8; i_14 += 3) /* same iter space */
                    {
                        arr_42 [i_0] [i_6] [i_7] [i_6] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) min((3603312520048812314ULL), (((/* implicit */unsigned long long int) (unsigned char)18))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)254)) ^ (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) (unsigned short)48825)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)13))) : (3603312520048812314ULL))))));
                        var_33 += ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)73)) ? (2074183226050954832LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-29)))))) ? (((((/* implicit */_Bool) -2074183226050954841LL)) ? (((/* implicit */int) (signed char)-27)) : (((/* implicit */int) (unsigned char)8)))) : (((/* implicit */int) ((((/* implicit */int) (signed char)75)) > (((/* implicit */int) var_5)))))))) <= (((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)240)) & (((/* implicit */int) var_10))))) / (((((/* implicit */_Bool) (unsigned char)189)) ? (2074183226050954831LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)189)))))))));
                        var_34 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */long long int) 1504599026U)) - (1997019670083642131LL)))) && (((/* implicit */_Bool) (unsigned char)253)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_4)) - (((/* implicit */int) var_1))))))));
                    }
                    for (unsigned long long int i_15 = 3; i_15 < 9; i_15 += 3) 
                    {
                        var_35 += ((signed char) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)88))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)172))) : (7169473480175608164LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_7)) - (((/* implicit */int) var_0)))))));
                        arr_46 [i_0] [i_7] = ((/* implicit */unsigned char) -8955705564499398883LL);
                    }
                }
            } 
        } 
        var_36 = ((/* implicit */_Bool) ((signed char) ((((((/* implicit */int) var_8)) - (((/* implicit */int) var_5)))) > (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))));
    }
    var_37 = var_9;
}
