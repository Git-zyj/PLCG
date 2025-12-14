/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83619
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
    var_20 |= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_4)), ((-(((((/* implicit */_Bool) var_7)) ? (var_17) : (var_10)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [6ULL] = ((/* implicit */unsigned short) ((unsigned char) max((((/* implicit */unsigned int) min(((unsigned short)38078), (((/* implicit */unsigned short) arr_5 [i_0]))))), (((unsigned int) 2411012113406896984LL)))));
                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((-3948325747121918922LL) & (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)38078))))) ? (((long long int) -6360703453853715979LL)) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40999)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) arr_10 [i_0] [4ULL] [i_2] [5]);
                                var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_15))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_5 = 0; i_5 < 25; i_5 += 4) 
    {
        for (int i_6 = 0; i_6 < 25; i_6 += 3) 
        {
            for (unsigned short i_7 = 0; i_7 < 25; i_7 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        var_24 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_3))) & (6360703453853715979LL)))) ? (((((/* implicit */_Bool) 3866643040U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10745))) : (7079847310445160029ULL))) : (((arr_19 [i_7]) << (((((/* implicit */int) var_12)) + (30538)))))));
                        arr_27 [i_5] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((unsigned short) arr_19 [i_6]));
                        arr_28 [i_6] [i_6] [i_6] = ((((/* implicit */_Bool) ((unsigned long long int) var_11))) ? (arr_17 [i_6]) : (((/* implicit */unsigned long long int) arr_21 [i_6] [i_6] [i_6])));
                    }
                    for (long long int i_9 = 0; i_9 < 25; i_9 += 2) /* same iter space */
                    {
                        arr_31 [i_5] [i_6] [i_5] = ((/* implicit */unsigned short) (((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (11344182429493871217ULL))) & (arr_19 [i_7])));
                        var_25 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_16 [i_5])) < (((/* implicit */int) arr_26 [i_5] [i_6] [i_5] [i_9] [i_9])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_5] [i_6] [i_7] [i_7] [i_9]))))) : (((/* implicit */int) min((arr_16 [i_5]), (arr_16 [i_6]))))));
                    }
                    for (long long int i_10 = 0; i_10 < 25; i_10 += 2) /* same iter space */
                    {
                        arr_35 [i_5] [i_6] [i_6] [i_6] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_18 [i_5] [i_5]), (((/* implicit */unsigned short) min((((/* implicit */unsigned char) arr_20 [18] [i_6])), (var_16))))))) ? (((/* implicit */long long int) (~(((/* implicit */int) min(((_Bool)1), (arr_20 [i_6] [i_7]))))))) : (((((/* implicit */_Bool) arr_18 [(_Bool)1] [i_6])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_10] [i_10] [i_10] [i_10])))))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (signed char i_11 = 1; i_11 < 21; i_11 += 3) 
                        {
                            arr_38 [i_5] [i_6] [i_7] [i_6] [i_5] = ((/* implicit */unsigned long long int) arr_26 [i_5] [i_6] [i_7] [i_6] [i_7]);
                            arr_39 [i_6] [(signed char)0] [i_6] [i_10] [i_11] = ((/* implicit */unsigned short) ((((var_2) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42521))))) == (((/* implicit */long long int) ((/* implicit */int) var_12)))));
                            arr_40 [i_5] [i_11 + 1] [i_5] [i_11 + 3] [i_11] [i_6] [i_10] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) var_2))) - (((((/* implicit */_Bool) 221427236)) ? (((/* implicit */int) arr_16 [i_5])) : (((/* implicit */int) (_Bool)1))))));
                        }
                        for (int i_12 = 1; i_12 < 22; i_12 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned int) 8178820127732172710LL);
                            var_27 = min((((((/* implicit */_Bool) min((221427234), (((/* implicit */int) (unsigned char)132))))) ? (((/* implicit */int) (unsigned short)39195)) : (((/* implicit */int) var_3)))), (((/* implicit */int) var_11)));
                            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_13)) ? (3404151531582951586ULL) : (((/* implicit */unsigned long long int) var_0))))))) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_4))) < (((/* implicit */int) (unsigned short)573))))))));
                        }
                        for (unsigned short i_13 = 0; i_13 < 25; i_13 += 3) 
                        {
                            arr_45 [i_5] [i_6] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) (+(min((arr_42 [i_5] [i_5] [i_5] [i_5] [i_5]), (arr_42 [i_5] [i_5] [i_5] [i_5] [i_5])))));
                            arr_46 [(signed char)6] [i_7] [i_6] [i_13] = ((/* implicit */short) ((_Bool) var_4));
                        }
                        for (int i_14 = 0; i_14 < 25; i_14 += 3) 
                        {
                            var_29 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((unsigned int) -4252190347512568891LL))), (((long long int) min((((/* implicit */int) arr_25 [i_5] [i_6] [i_7] [(signed char)9] [i_10] [(unsigned short)4])), (-1839334754))))));
                            var_30 |= ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_21 [i_10] [i_10] [(unsigned char)18])) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) < (((/* implicit */unsigned long long int) min((((/* implicit */int) var_5)), (1963447367)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_44 [i_14] [i_10] [i_6] [i_5]), (((unsigned short) var_8)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_5])))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) / (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1809)))))));
                            arr_51 [i_6] = ((/* implicit */unsigned char) arr_16 [i_5]);
                        }
                        arr_52 [i_5] [i_6] [i_5] [i_5] [i_5] [17] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_15)))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_36 [20U] [(unsigned char)21] [i_7] [i_7] [i_7] [i_7]))) : (((((/* implicit */_Bool) -1358934877862739079LL)) ? (arr_17 [i_5]) : (((/* implicit */unsigned long long int) var_2))))))) ? (((/* implicit */int) var_11)) : ((-(((int) (signed char)-81))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_15 = 0; i_15 < 25; i_15 += 1) 
                    {
                        var_31 *= ((/* implicit */signed char) ((min((((((/* implicit */_Bool) arr_17 [(short)4])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_5] [(signed char)15]))))), (((/* implicit */long long int) (~(((/* implicit */int) (short)-10287))))))) != (((/* implicit */long long int) (~((~(arr_55 [i_5]))))))));
                        arr_56 [i_5] [i_6] [i_6] [i_7] [i_15] = (+(((/* implicit */int) ((unsigned short) var_17))));
                        var_32 = ((/* implicit */int) ((_Bool) ((((/* implicit */long long int) 2810904672U)) <= (-4252190347512568892LL))));
                    }
                }
            } 
        } 
    } 
}
