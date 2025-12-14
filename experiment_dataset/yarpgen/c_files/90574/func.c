/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90574
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
    var_16 &= ((/* implicit */unsigned int) var_11);
    var_17 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (-2436611009123237458LL) : (((/* implicit */long long int) var_12))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((unsigned int) -2436611009123237458LL))))) && (((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_11)))) <= (min((((/* implicit */long long int) (unsigned short)51383)), (2436611009123237450LL)))))));
    var_18 = ((/* implicit */short) ((4339085679369250783LL) <= (((((((/* implicit */int) var_11)) <= (((/* implicit */int) var_11)))) ? (var_0) : (((/* implicit */long long int) var_9))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) min(((-(((((/* implicit */_Bool) var_0)) ? (4339085679369250783LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))), (4339085679369250783LL)));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            arr_5 [i_1] [i_1] [i_1] = ((/* implicit */int) ((4339085679369250783LL) + (-5049901589693239416LL)));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 1037873313760046216ULL)) ? (((/* implicit */int) arr_7 [i_1] [i_3] [i_1] [i_1])) : (((/* implicit */int) arr_7 [i_1] [i_1] [i_3] [i_4])))), (((/* implicit */int) (unsigned short)32858))));
                            arr_14 [i_2] [(unsigned short)0] [(unsigned char)9] [i_2] [i_2] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((arr_4 [5LL] [i_1] [i_1]) + (2147483647))) << (((((/* implicit */int) (signed char)85)) - (85)))))), (arr_3 [i_1] [i_1])));
                        }
                        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 4) 
                        {
                            var_20 *= ((/* implicit */unsigned long long int) arr_15 [i_0]);
                            var_21 = ((/* implicit */short) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)0), (arr_6 [i_0] [i_1] [i_3] [i_5]))))) % (arr_9 [i_2]))));
                        }
                        for (int i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            arr_19 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((unsigned long long int) ((long long int) arr_10 [i_6] [(_Bool)1]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)228))) <= (((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1] [i_1])) ? (4339085679369250783LL) : (2436611009123237436LL)))))))));
                            var_22 = ((((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) (signed char)36)), (arr_3 [i_1] [i_1]))), ((-(9223372036854775807LL)))))) * (((((/* implicit */_Bool) (unsigned char)27)) ? (arr_12 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)47))))));
                        }
                        var_23 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)252))) + (16756025798128834524ULL)));
                        arr_20 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) (~(min((-2436611009123237442LL), (((/* implicit */long long int) (signed char)-86))))));
                        arr_21 [i_0] [6U] [i_2] [i_1] = ((/* implicit */int) (((!(((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (-(arr_4 [i_0] [i_1] [i_2])))), (((var_10) / (var_5)))))) : (arr_12 [(signed char)6] [i_1])));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 3) 
            {
                var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) max(((-(((int) arr_9 [7])))), (((/* implicit */int) (unsigned short)36443)))))));
                arr_24 [i_1] [i_1] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_7 [i_1] [i_7] [i_1] [i_1])) ^ (((/* implicit */int) (unsigned char)0)))) << (((min((((/* implicit */unsigned int) arr_15 [i_7])), (arr_23 [i_1] [i_1] [i_7]))) - (18999U)))))) ? (arr_16 [i_1] [(signed char)9] [i_0] [i_0] [i_1]) : (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (signed char)85)) : (((/* implicit */int) (signed char)34)))), (min((-1610088767), (((/* implicit */int) arr_0 [i_1])))))))));
            }
            arr_25 [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0])) && ((!(((((/* implicit */_Bool) -1213554321775831576LL)) || (((/* implicit */_Bool) arr_8 [i_1] [(short)6] [i_1] [i_1] [(_Bool)0]))))))));
            var_25 = ((/* implicit */unsigned char) ((int) arr_8 [i_1] [i_1] [i_1] [i_0] [i_0]));
        }
    }
    /* LoopSeq 3 */
    for (int i_8 = 0; i_8 < 18; i_8 += 1) /* same iter space */
    {
        var_26 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_8])) ? (arr_26 [i_8]) : (((/* implicit */unsigned int) arr_27 [i_8]))))) ? (min((min((((/* implicit */unsigned int) arr_27 [i_8])), (arr_26 [i_8]))), (min((4294967295U), (((/* implicit */unsigned int) (signed char)8)))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-12)))))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 18; i_9 += 3) 
        {
            for (long long int i_10 = 0; i_10 < 18; i_10 += 3) 
            {
                {
                    arr_32 [i_8] [i_9] [i_9] = ((/* implicit */signed char) min((((/* implicit */int) ((unsigned char) arr_27 [i_8]))), ((+(arr_27 [i_8])))));
                    var_27 *= ((/* implicit */int) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)46493)) ^ (((/* implicit */int) arr_31 [4ULL] [13] [i_10] [4ULL]))))), (max((((/* implicit */unsigned long long int) 1820976639)), (4294967295ULL)))))));
                    var_28 = ((max((arr_27 [i_8]), (arr_27 [i_10]))) ^ (((/* implicit */int) ((signed char) (+(((/* implicit */int) (unsigned short)17994)))))));
                    var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) min((arr_30 [(short)12]), (((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) 0U))) ? (((/* implicit */unsigned int) arr_29 [7ULL] [i_9] [i_8])) : (min((((/* implicit */unsigned int) (unsigned short)17999)), (arr_26 [i_10])))))))))));
                    var_30 += ((/* implicit */int) min((((/* implicit */long long int) ((signed char) ((((/* implicit */int) (unsigned short)17999)) << (((((/* implicit */int) (unsigned short)40691)) - (40686))))))), (((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (2436611009123237416LL)))));
                }
            } 
        } 
        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_8] [(unsigned char)15] [i_8] [i_8])) ? (((/* implicit */int) arr_31 [i_8] [i_8] [i_8] [i_8])) : (((/* implicit */int) (signed char)-1))))), (((unsigned long long int) 2845549665U))))) ? (min((((/* implicit */long long int) arr_31 [8ULL] [i_8] [i_8] [i_8])), (max((((/* implicit */long long int) arr_31 [i_8] [1] [i_8] [i_8])), (arr_30 [(unsigned char)2]))))) : (((/* implicit */long long int) ((/* implicit */int) ((min((((/* implicit */long long int) arr_31 [i_8] [i_8] [i_8] [i_8])), (arr_30 [14LL]))) != (((/* implicit */long long int) arr_26 [i_8]))))))));
        var_32 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) arr_28 [i_8] [(short)3] [i_8])))))) ? (((/* implicit */unsigned long long int) (+(min((arr_26 [i_8]), (((/* implicit */unsigned int) arr_28 [i_8] [(signed char)2] [i_8]))))))) : (max((((arr_28 [i_8] [i_8] [(signed char)8]) ? (((/* implicit */unsigned long long int) arr_27 [i_8])) : (2716593612149981213ULL))), (((/* implicit */unsigned long long int) arr_28 [i_8] [i_8] [i_8]))))));
    }
    for (int i_11 = 0; i_11 < 18; i_11 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_12 = 0; i_12 < 18; i_12 += 3) 
        {
            for (long long int i_13 = 0; i_13 < 18; i_13 += 3) 
            {
                {
                    arr_42 [i_11] [i_11] [(signed char)12] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((int) 2436611009123237457LL)), ((-(arr_27 [i_11])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)47536)) : (((/* implicit */int) arr_37 [(unsigned char)5] [i_11]))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)0))))) : (arr_33 [i_11]))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_31 [i_11] [i_11] [i_12] [(short)14]), (((/* implicit */short) ((signed char) var_4)))))))));
                    var_33 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_41 [i_11] [i_12] [i_12]))) == ((~(2436611009123237457LL)))))), (max((min((-1945621728879728531LL), (((/* implicit */long long int) arr_39 [i_11] [i_12] [i_11] [6LL])))), (-1244082487652686709LL)))));
                    arr_43 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */int) arr_33 [i_11]);
                }
            } 
        } 
        var_34 = max((min((((((/* implicit */int) (unsigned short)17999)) * (((/* implicit */int) (unsigned short)47536)))), (((int) arr_29 [i_11] [i_11] [i_11])))), (((/* implicit */int) ((unsigned char) min((arr_35 [i_11]), (((/* implicit */unsigned long long int) -8065631998066589784LL)))))));
    }
    for (int i_14 = 0; i_14 < 18; i_14 += 1) /* same iter space */
    {
        var_35 = ((/* implicit */unsigned long long int) min((var_35), (((((/* implicit */_Bool) 511ULL)) ? (arr_46 [i_14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) min((2436611009123237435LL), (((/* implicit */long long int) arr_41 [i_14] [i_14] [i_14])))))))))));
        var_36 = ((/* implicit */long long int) ((short) arr_46 [i_14]));
        arr_48 [14] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)0))))) ? (arr_34 [12ULL]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_38 [8] [i_14])) ? (((/* implicit */int) arr_37 [(signed char)12] [(signed char)12])) : (arr_47 [i_14]))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) (signed char)-36))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 3773459392465816777LL)))) : (min((arr_26 [i_14]), (((/* implicit */unsigned int) arr_44 [i_14] [i_14]))))))) : (((((/* implicit */_Bool) (signed char)-12)) ? (2436611009123237457LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-5)))))));
        arr_49 [i_14] = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) arr_45 [i_14] [i_14])) ? (((/* implicit */int) (unsigned short)17995)) : (((/* implicit */int) arr_45 [i_14] [i_14])))));
    }
}
