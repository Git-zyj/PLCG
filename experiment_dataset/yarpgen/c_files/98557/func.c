/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98557
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_12 = (+(var_10));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (arr_2 [i_1]))))) % (((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */int) ((((/* implicit */_Bool) 30072363101693149LL)) && ((_Bool)1)))) * (((/* implicit */int) arr_10 [(short)19])))) : ((((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5))))));
        arr_11 [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(var_8)))))))));
        arr_12 [i_2] [13LL] = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) var_5))))) : (((/* implicit */int) arr_9 [(unsigned char)19]))))) : (max((arr_7 [i_2]), (arr_7 [i_2]))));
    }
    for (unsigned short i_3 = 1; i_3 < 11; i_3 += 3) 
    {
        /* LoopSeq 3 */
        for (short i_4 = 1; i_4 < 11; i_4 += 3) 
        {
            var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_9))) % ((((_Bool)1) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45238)))))))) && (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) && (((((/* implicit */_Bool) arr_15 [(short)10] [i_3] [(short)10])) || (((/* implicit */_Bool) arr_8 [i_4])))))))))));
            arr_17 [i_3] [i_4] [i_3] = ((/* implicit */long long int) ((((arr_13 [i_3]) ? (((/* implicit */int) arr_10 [i_4 + 3])) : (((/* implicit */int) var_8)))) / ((-(((/* implicit */int) (unsigned short)50333))))));
            var_15 = ((/* implicit */unsigned long long int) ((_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (var_10))));
        }
        for (long long int i_5 = 0; i_5 < 14; i_5 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                for (short i_7 = 0; i_7 < 14; i_7 += 1) 
                {
                    {
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)110)), (((((/* implicit */_Bool) arr_10 [i_5])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))) || (((/* implicit */_Bool) (((+(((/* implicit */int) (signed char)120)))) % (((/* implicit */int) (unsigned char)149)))))));
                        arr_25 [i_3] [0U] [i_6] [i_7] &= ((/* implicit */short) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) arr_13 [(signed char)8])))), (((/* implicit */int) (unsigned char)91))));
                        /* LoopSeq 1 */
                        for (short i_8 = 2; i_8 < 12; i_8 += 1) 
                        {
                            arr_29 [i_5] [i_5] [12LL] [(_Bool)0] [i_5] |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_7 [i_5])))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_4))))))) ? (((/* implicit */int) arr_13 [12ULL])) : (((/* implicit */int) arr_27 [(_Bool)1] [i_5] [i_7] [i_8]))));
                            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (~((((_Bool)1) ? (-2612511891720740294LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)224))))))))));
                            var_18 ^= ((unsigned short) (_Bool)1);
                        }
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned char i_9 = 1; i_9 < 13; i_9 += 3) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (short i_11 = 0; i_11 < 14; i_11 += 4) 
                    {
                        {
                            arr_38 [i_3] [i_3] = ((/* implicit */unsigned char) (((_Bool)1) && ((_Bool)1)));
                            arr_39 [i_3] [(unsigned char)2] [i_11] |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min(((unsigned short)50333), ((unsigned short)50333)))) && (((/* implicit */_Bool) arr_27 [i_10] [i_9] [1ULL] [i_3])))) || (((/* implicit */_Bool) arr_15 [i_9] [i_10] [i_11]))));
                            var_19 ^= ((/* implicit */unsigned int) (unsigned char)24);
                        }
                    } 
                } 
            } 
            var_20 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) var_6))));
            arr_40 [i_3] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)6))));
        }
        /* vectorizable */
        for (long long int i_12 = 0; i_12 < 14; i_12 += 3) /* same iter space */
        {
            var_21 = ((/* implicit */_Bool) arr_31 [i_3] [i_12] [i_12]);
            arr_43 [i_3] [i_3] = ((/* implicit */long long int) ((var_11) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)232)))));
        }
        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((unsigned char) (+(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (_Bool)1)))))));
        /* LoopSeq 3 */
        for (short i_13 = 0; i_13 < 14; i_13 += 1) 
        {
            arr_47 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65535)) | (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))));
            arr_48 [(_Bool)1] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)191)) ? (((/* implicit */int) arr_18 [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_16 [i_3] [(short)8]))))) % (((((/* implicit */_Bool) 4294967293U)) ? (12438407845329222011ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56)))))))) ? (((((((/* implicit */int) arr_23 [i_3] [(_Bool)1])) > (((/* implicit */int) (unsigned char)215)))) ? (((((/* implicit */_Bool) arr_10 [i_3])) ? (-1140601364904212203LL) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_3]))))) : ((-(-1140601364904212192LL))))) : (((/* implicit */long long int) min((((((/* implicit */_Bool) var_3)) ? (132244412U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (arr_42 [i_3] [12U] [i_13]))))));
            /* LoopSeq 1 */
            for (long long int i_14 = 2; i_14 < 13; i_14 += 2) 
            {
                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) var_11))));
                arr_51 [i_14] [i_14] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_0)))) ? (((/* implicit */int) (unsigned char)99)) : (((/* implicit */int) (signed char)-52))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (max((var_10), (((/* implicit */unsigned int) (signed char)-77))))));
            }
        }
        for (long long int i_15 = 1; i_15 < 10; i_15 += 1) /* same iter space */
        {
            var_24 += ((/* implicit */unsigned int) var_4);
            var_25 ^= ((/* implicit */unsigned char) var_11);
        }
        for (long long int i_16 = 1; i_16 < 10; i_16 += 1) /* same iter space */
        {
            var_26 ^= ((/* implicit */short) arr_7 [i_3]);
            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)30)) + (((/* implicit */int) (_Bool)1))))) ? ((-(((/* implicit */int) arr_20 [i_3 - 1] [i_3 + 1] [i_3] [i_16 - 1])))) : (((/* implicit */int) arr_20 [i_3 + 1] [i_3 + 2] [i_16] [i_16 + 3]))));
            var_28 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_45 [i_3 + 2])) || (((/* implicit */_Bool) arr_45 [i_3 + 1])))) ? (((/* implicit */int) ((signed char) arr_32 [2LL]))) : (((/* implicit */int) min((arr_22 [i_3 - 1] [i_3 + 3] [i_16 + 4] [i_16]), (arr_32 [(unsigned char)2]))))));
        }
    }
}
