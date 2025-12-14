/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74094
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
    var_16 ^= ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) var_10)), ((~(var_12))))), (((/* implicit */unsigned long long int) var_3))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 4 */
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            arr_6 [i_0] = ((/* implicit */unsigned char) var_3);
            arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) ((-1LL) ^ (((/* implicit */long long int) arr_3 [i_0]))));
            arr_8 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (8093034899506017207LL) : (((/* implicit */long long int) arr_3 [i_0]))));
            arr_9 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) 2540143097U)) : (13416128497246617202ULL)));
        }
        for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            var_17 = ((/* implicit */long long int) arr_4 [i_2]);
            arr_12 [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_10 [i_0] [14U]))));
        }
        for (short i_3 = 0; i_3 < 19; i_3 += 1) /* same iter space */
        {
            arr_15 [i_0] [8ULL] [i_0] = ((((/* implicit */_Bool) 4LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (3310867682U))));
            arr_16 [i_0] = ((/* implicit */short) ((unsigned short) 16777216U));
        }
        for (short i_4 = 0; i_4 < 19; i_4 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) var_11))))))));
            /* LoopNest 2 */
            for (unsigned short i_5 = 1; i_5 < 17; i_5 += 3) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 3) 
                {
                    {
                        var_19 = ((/* implicit */signed char) (~(((/* implicit */int) arr_5 [i_4] [i_0]))));
                        arr_23 [i_0] [i_4] [i_4] [i_4] [i_5] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) var_5))) % (((/* implicit */int) ((_Bool) 3844209544349267458ULL)))));
                    }
                } 
            } 
            arr_24 [i_4] [i_4] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_0])) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) < (((((/* implicit */_Bool) arr_20 [i_4])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0])))))));
            var_20 &= (+(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (var_0))));
        }
        arr_25 [i_0] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [i_0])))) ? (((var_1) >> (((arr_21 [i_0]) + (6144146119212098295LL))))) : (((arr_19 [i_0]) - (2763506514U)))));
        arr_26 [(unsigned short)12] [i_0] &= ((/* implicit */unsigned short) 1531460777U);
        /* LoopNest 3 */
        for (unsigned short i_7 = 0; i_7 < 19; i_7 += 1) 
        {
            for (short i_8 = 3; i_8 < 15; i_8 += 2) 
            {
                for (unsigned short i_9 = 1; i_9 < 17; i_9 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned short) ((arr_17 [i_0]) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_8])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_11)))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_10 = 0; i_10 < 19; i_10 += 2) 
                        {
                            arr_39 [i_0] [i_9] [i_0] = ((/* implicit */_Bool) arr_3 [i_0]);
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((long long int) -7555153731915251709LL)))));
                            arr_40 [i_10] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((-4LL) != (((/* implicit */long long int) ((/* implicit */int) var_3))))) ? (arr_21 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [(unsigned short)2]))) == (arr_28 [(signed char)1] [i_8 + 3])))))));
                        }
                        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((arr_38 [i_8 + 2] [i_9 - 1] [i_9 - 1] [10LL] [i_9 - 1] [i_9 + 2] [(unsigned short)18]) ^ (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(short)14]))) ^ (2763506513U)))))))));
                    }
                } 
            } 
        } 
        arr_41 [i_0] = ((arr_29 [i_0] [i_0] [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
    }
    for (unsigned short i_11 = 0; i_11 < 19; i_11 += 1) /* same iter space */
    {
        arr_46 [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) var_13))) ? (((/* implicit */int) min((((/* implicit */short) ((((/* implicit */_Bool) 10LL)) || (((/* implicit */_Bool) var_5))))), (var_13)))) : (min((((/* implicit */int) var_3)), (((((/* implicit */int) (unsigned short)45414)) | (((/* implicit */int) (unsigned short)57153))))))));
        /* LoopNest 3 */
        for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (unsigned short i_14 = 0; i_14 < 19; i_14 += 4) 
                {
                    {
                        arr_56 [i_11] [i_14] [i_13] [i_14] [(unsigned char)18] |= ((/* implicit */unsigned short) ((min((2763506514U), (((/* implicit */unsigned int) ((_Bool) (unsigned char)194))))) | (min((((((/* implicit */_Bool) arr_47 [i_14] [i_13] [i_14])) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned int) arr_34 [i_14]))))));
                        arr_57 [i_11] [0LL] [i_12] [i_11] [i_14] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_12 + 1] [i_12 + 1])) ? (arr_47 [i_12] [(signed char)13] [i_13]) : (((arr_28 [i_13] [13LL]) * (0U))))))));
                    }
                } 
            } 
        } 
    }
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned short)45414)) | (((/* implicit */int) (signed char)1))))))) & (min((((/* implicit */long long int) var_1)), (((long long int) var_3))))));
    var_25 *= ((/* implicit */long long int) (((~(((((/* implicit */unsigned int) ((/* implicit */int) var_13))) ^ (var_14))))) >= (((/* implicit */unsigned int) (+(((/* implicit */int) var_2)))))));
    var_26 = ((((/* implicit */unsigned int) (+(((((/* implicit */int) var_10)) - (((/* implicit */int) var_5))))))) ^ (((unsigned int) ((((/* implicit */int) (unsigned short)45421)) < (((/* implicit */int) var_10))))));
}
