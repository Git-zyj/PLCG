/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97165
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 19; i_1 += 2) /* same iter space */
        {
            var_13 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [i_1]))));
            var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [(short)18] [i_1] [i_1]))));
            var_15 = ((/* implicit */unsigned int) ((arr_4 [i_1] [(signed char)7] [i_0]) == (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)33345)))))));
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    {
                        var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_0]))));
                        var_17 ^= 1097463454;
                    }
                } 
            } 
            var_18 = ((/* implicit */unsigned char) ((arr_2 [(signed char)5] [i_1] [i_1]) < (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
        }
        for (int i_4 = 0; i_4 < 19; i_4 += 2) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_0] [i_4] [i_4])) ? (((/* implicit */int) arr_7 [i_0] [i_4] [i_4])) : (((/* implicit */int) var_9))));
            arr_12 [5U] [16] [(short)5] = ((/* implicit */short) (+(arr_1 [i_4])));
        }
        var_20 = 7859393421574976313LL;
        /* LoopSeq 1 */
        for (unsigned short i_5 = 0; i_5 < 19; i_5 += 2) 
        {
            var_21 = ((/* implicit */int) ((((/* implicit */int) (unsigned short)29308)) != (((/* implicit */int) var_3))));
            var_22 += ((/* implicit */unsigned int) arr_8 [i_0]);
        }
        /* LoopSeq 2 */
        for (unsigned char i_6 = 0; i_6 < 19; i_6 += 3) 
        {
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(1118915369U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42491))) : (arr_10 [i_0] [i_0] [i_6])));
            var_24 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-82))));
        }
        for (unsigned int i_7 = 1; i_7 < 15; i_7 += 3) 
        {
            var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)8)) ? (1118915369U) : (1351699429U))))));
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) 1118915355U)) ? (0) : (((/* implicit */int) var_9)))) : (((/* implicit */int) (unsigned short)24182))));
            /* LoopNest 3 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (unsigned int i_9 = 0; i_9 < 19; i_9 += 1) 
                {
                    for (unsigned int i_10 = 1; i_10 < 18; i_10 += 4) 
                    {
                        {
                            var_27 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_10 - 1] [i_7])) ? (((/* implicit */unsigned int) var_2)) : (arr_18 [i_10 + 1] [i_7])));
                            var_28 = ((/* implicit */short) ((arr_23 [i_10 + 1] [i_10] [i_7] [(_Bool)1] [i_8] [(_Bool)1]) ? (arr_28 [i_10 - 1] [i_10 - 1] [i_10] [(signed char)8] [i_10 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                            var_29 = ((/* implicit */short) ((arr_15 [(short)10]) ? (((/* implicit */int) var_4)) : ((+(((/* implicit */int) (signed char)72))))));
                        }
                    } 
                } 
            } 
        }
    }
    for (signed char i_11 = 0; i_11 < 19; i_11 += 3) /* same iter space */
    {
        var_30 = ((/* implicit */unsigned int) min((var_8), (((((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (signed char)104))))) ? (((/* implicit */int) (short)32760)) : (((/* implicit */int) (signed char)0))))));
        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_24 [i_11] [(short)10] [i_11] [i_11])))) ? ((~(arr_24 [i_11] [i_11] [i_11] [i_11]))) : (((/* implicit */unsigned long long int) (~(-2325536104900591359LL))))));
    }
    for (short i_12 = 0; i_12 < 14; i_12 += 2) 
    {
        arr_34 [i_12] = ((/* implicit */signed char) (+((~(min((456089230U), (((/* implicit */unsigned int) (unsigned char)177))))))));
        /* LoopSeq 2 */
        for (unsigned int i_13 = 0; i_13 < 14; i_13 += 1) /* same iter space */
        {
            var_32 = ((/* implicit */unsigned short) (!(((((((/* implicit */_Bool) (signed char)-118)) ? (((/* implicit */int) (unsigned char)68)) : (((/* implicit */int) var_11)))) <= (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (var_2)))))));
            var_33 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) var_10)) & (((/* implicit */int) arr_23 [i_12] [i_13] [i_13] [i_13] [i_13] [i_13])))), (((/* implicit */int) max((((/* implicit */signed char) arr_23 [10ULL] [i_13] [12] [(_Bool)1] [i_12] [(signed char)10])), ((signed char)49))))));
        }
        for (unsigned int i_14 = 0; i_14 < 14; i_14 += 1) /* same iter space */
        {
            var_34 = ((/* implicit */unsigned short) (+(((arr_15 [i_14]) ? (((/* implicit */int) (short)-29209)) : (((/* implicit */int) arr_15 [i_14]))))));
            var_35 = ((/* implicit */unsigned short) -693457640);
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 14; i_15 += 3) 
            {
                for (unsigned long long int i_16 = 1; i_16 < 12; i_16 += 3) 
                {
                    for (signed char i_17 = 3; i_17 < 13; i_17 += 2) 
                    {
                        {
                            arr_48 [i_14] [i_14] [i_15] [i_16] [(signed char)4] = ((/* implicit */unsigned int) (-(max((((((/* implicit */_Bool) 5835556936407541613LL)) ? (((/* implicit */long long int) -737969598)) : (-8216105825183302610LL))), (((((/* implicit */_Bool) (signed char)-38)) ? (-5835556936407541613LL) : (((/* implicit */long long int) 3176051927U))))))));
                            arr_49 [i_17 - 1] [i_14] [i_14] [i_16] [(short)12] [(unsigned short)1] = ((/* implicit */unsigned int) ((unsigned char) (!(((/* implicit */_Bool) var_0)))));
                        }
                    } 
                } 
            } 
            var_36 = ((/* implicit */short) ((((_Bool) (unsigned char)89)) ? (((((/* implicit */_Bool) max((4617160427756959458LL), (7749220737203773090LL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)229)) ? (0) : (((/* implicit */int) (unsigned char)231))))) : (45762991U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [i_12] [i_14] [i_14])))))));
        }
    }
    var_37 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? ((~((~(((/* implicit */int) var_10)))))) : ((-(0)))));
    var_38 = 1374947916;
    var_39 ^= ((/* implicit */unsigned int) ((unsigned short) var_10));
}
