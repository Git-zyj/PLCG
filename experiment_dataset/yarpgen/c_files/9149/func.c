/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9149
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
    var_12 = ((/* implicit */long long int) ((var_11) | (max((((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)11013))), (var_11)))));
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) >> (((((((/* implicit */_Bool) 6549538613422647850LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-73))) : (0LL))) + (80LL)))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) var_4)) < (((/* implicit */int) var_5))))), (max((var_2), (((/* implicit */long long int) var_6))))))) : (((max((var_1), (((/* implicit */unsigned long long int) (unsigned short)37954)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) (unsigned short)50301))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_14 = ((/* implicit */short) ((unsigned short) var_3));
        /* LoopSeq 1 */
        for (int i_1 = 4; i_1 < 13; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_11 [3LL] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_1 - 4] [i_1 - 3])) ? (((/* implicit */int) (unsigned short)27584)) : (((/* implicit */int) var_6))));
                        arr_12 [i_0] [i_1 - 4] [i_2] [i_0] [i_1] [(_Bool)1] = ((/* implicit */short) (unsigned short)37953);
                        arr_13 [i_1] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)122)) ? (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3]))) - (var_2))) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)122)) * (((/* implicit */int) var_5)))))));
                        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)27578))))) ? (((((/* implicit */int) (signed char)(-127 - 1))) | (((/* implicit */int) (unsigned short)27582)))) : (((/* implicit */int) ((_Bool) arr_10 [i_0])))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                for (int i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    {
                        arr_21 [i_1] [12ULL] [i_4] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_5])) ? (((/* implicit */int) (unsigned short)37962)) : (((/* implicit */int) arr_20 [i_5] [i_4] [i_1] [i_0] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) var_8))))) : (((/* implicit */int) var_6)));
                        arr_22 [i_0] [i_1] [i_4] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 9223372036854775798LL))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (long long int i_7 = 0; i_7 < 15; i_7 += 2) 
                {
                    {
                        arr_27 [i_1] [i_6] [(unsigned short)13] [14U] [i_1] = ((/* implicit */signed char) var_1);
                        arr_28 [i_0] [i_1] [i_6] [i_7] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_7] [i_6])) ? (((((/* implicit */int) arr_20 [i_0] [6U] [i_1] [i_0] [i_0])) + (((/* implicit */int) (unsigned short)37962)))) : (((((/* implicit */int) (unsigned short)8191)) + (((/* implicit */int) (unsigned short)0))))));
                    }
                } 
            } 
            var_16 ^= ((((/* implicit */_Bool) arr_9 [i_1 - 2] [i_1 - 3] [i_1] [i_1 - 2] [i_1] [i_1 - 3])) ? (arr_9 [i_1] [i_1 + 1] [i_1] [i_1 - 1] [i_1 + 1] [i_1 - 3]) : (((/* implicit */unsigned long long int) 4294967286U)));
        }
        arr_29 [i_0] = ((/* implicit */unsigned int) ((arr_4 [i_0]) == (((/* implicit */unsigned int) arr_6 [i_0]))));
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 3) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    arr_36 [i_0] [i_8] [i_8] = ((((/* implicit */_Bool) (unsigned short)27582)) ? (((/* implicit */int) (signed char)-107)) : (((/* implicit */int) arr_33 [i_8])));
                    var_17 = ((/* implicit */short) var_2);
                    var_18 = (i_8 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_0]))) > (11ULL)))) >> (((((((/* implicit */_Bool) (unsigned char)229)) ? (arr_23 [i_0] [i_8] [i_9] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) - (379880658240052146LL)))))) : (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_0]))) > (11ULL)))) >> (((((((((/* implicit */_Bool) (unsigned char)229)) ? (arr_23 [i_0] [i_8] [i_9] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) - (379880658240052146LL))) + (3856227843246461971LL))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_10 = 0; i_10 < 15; i_10 += 4) 
        {
            for (unsigned char i_11 = 0; i_11 < 15; i_11 += 2) 
            {
                {
                    arr_43 [i_0] [i_10] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)237)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_42 [i_0] [i_10] [i_11]))))) : ((+(arr_23 [i_0] [i_10] [(unsigned char)12] [i_11])))));
                    arr_44 [i_0] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_0] [i_10])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_16 [i_10] [i_0]))))) : (((65534U) >> (((((/* implicit */int) var_4)) + (104)))))));
                    arr_45 [i_10] = ((/* implicit */_Bool) (+(arr_41 [i_11] [i_10] [i_11])));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned char i_12 = 4; i_12 < 15; i_12 += 4) 
    {
        for (unsigned int i_13 = 0; i_13 < 16; i_13 += 4) 
        {
            {
                var_19 = ((/* implicit */short) 3406727464223493454LL);
                /* LoopNest 2 */
                for (signed char i_14 = 2; i_14 < 15; i_14 += 3) 
                {
                    for (unsigned short i_15 = 0; i_15 < 16; i_15 += 3) 
                    {
                        {
                            arr_54 [i_12] [i_12] [i_15] [i_14] [i_13] = ((/* implicit */unsigned int) arr_52 [i_12] [i_13] [3U] [i_13]);
                            arr_55 [i_12 - 1] [i_12 - 1] [i_14] = ((/* implicit */unsigned int) 3406727464223493447LL);
                            var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)27581), ((unsigned short)27601)))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (arr_51 [i_12] [i_13] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29331))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) >> (((((/* implicit */int) arr_50 [i_14] [i_14])) - (8926)))))))))));
                            var_21 = ((/* implicit */long long int) arr_53 [(signed char)1] [i_13] [(_Bool)1] [i_13] [i_13] [i_13]);
                        }
                    } 
                } 
                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) arr_50 [i_13] [8]))));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 13920529004700523966ULL)) ? (((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)44)))))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)23535), (((/* implicit */unsigned short) var_10))))))));
}
