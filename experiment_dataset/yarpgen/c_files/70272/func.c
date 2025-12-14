/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70272
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_1 [i_0]), (arr_1 [i_0])))) ? ((+(max((((/* implicit */int) (signed char)67)), (var_2))))) : ((((~(((/* implicit */int) var_7)))) ^ (((/* implicit */int) arr_1 [i_0]))))));
        var_17 ^= ((/* implicit */signed char) arr_1 [8LL]);
    }
    for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        var_18 &= ((/* implicit */int) -1LL);
        arr_5 [i_1] = ((/* implicit */unsigned short) (-(min((min((var_15), (((/* implicit */long long int) arr_3 [i_1])))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_1 [(_Bool)0])))))))));
    }
    /* LoopSeq 4 */
    for (int i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_2])) <= (((/* implicit */int) ((_Bool) arr_9 [i_2])))));
        arr_10 [i_2] |= ((((/* implicit */_Bool) (-((+(((/* implicit */int) (signed char)31))))))) ? ((+(-752684798))) : ((-(((/* implicit */int) var_12)))));
        var_20 &= ((/* implicit */long long int) (+((-(((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) var_12)) : (1662223463)))))));
    }
    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_4 = 2; i_4 < 21; i_4 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_5 = 0; i_5 < 22; i_5 += 3) 
            {
                var_21 = ((/* implicit */unsigned int) arr_16 [i_3] [i_4]);
                arr_18 [i_3] = ((/* implicit */short) arr_13 [i_3] [i_3]);
            }
            var_22 = ((/* implicit */long long int) (+(2416939161U)));
        }
        for (long long int i_6 = 4; i_6 < 19; i_6 += 2) 
        {
            var_23 -= ((/* implicit */long long int) ((((/* implicit */_Bool) max((min((arr_13 [i_3] [i_6]), (((/* implicit */int) var_3)))), (((((/* implicit */int) (unsigned short)13634)) | (((/* implicit */int) (_Bool)1))))))) ? ((-(var_2))) : (((/* implicit */int) (((~(var_6))) != ((~(((/* implicit */int) (_Bool)1)))))))));
            arr_21 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_11 [i_3])) : ((+(max((arr_19 [i_3] [i_3]), (((/* implicit */int) var_14))))))));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 22; i_7 += 1) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 3) 
                {
                    {
                        var_24 = max((((((/* implicit */int) arr_15 [i_6] [i_3])) / (((/* implicit */int) (unsigned short)8080)))), (((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)166)) || ((_Bool)1)))) / (((/* implicit */int) var_4)))));
                        var_25 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_13 [i_6 - 4] [i_3])) || (((/* implicit */_Bool) arr_15 [i_6 - 1] [i_3])))), ((!(((/* implicit */_Bool) arr_15 [i_6 + 1] [i_3]))))));
                    }
                } 
            } 
        }
        var_26 *= ((/* implicit */unsigned int) min((min((min((((/* implicit */unsigned long long int) arr_15 [i_3] [14U])), (14ULL))), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) (+(min((4690716481419167966LL), (arr_12 [16]))))))));
        arr_26 [i_3] = var_13;
    }
    for (unsigned char i_9 = 1; i_9 < 16; i_9 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_10 = 3; i_10 < 17; i_10 += 1) 
        {
            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) (+(((/* implicit */int) var_12)))))));
            arr_34 [i_10] [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_6 [i_9 + 2])) : (((/* implicit */int) arr_6 [i_9 + 2]))));
            var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_32 [i_9 + 3])) ? (arr_12 [14LL]) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_10] [i_10]))))))));
            var_29 &= arr_23 [(short)10] [(short)10];
            var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) var_7))));
        }
        arr_35 [i_9] = ((/* implicit */unsigned char) arr_11 [i_9]);
        /* LoopNest 3 */
        for (long long int i_11 = 3; i_11 < 16; i_11 += 4) 
        {
            for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 2) 
            {
                for (int i_13 = 0; i_13 < 19; i_13 += 1) 
                {
                    {
                        arr_43 [i_11] [i_11] [i_11] [i_11] [i_9] = ((/* implicit */long long int) max((((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_11 [i_9])), ((unsigned char)250)))) : (((/* implicit */int) ((((/* implicit */int) var_0)) == (arr_13 [i_12] [i_9])))))), (var_9)));
                        var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) (-(min((var_2), (((/* implicit */int) ((((/* implicit */int) arr_16 [i_12] [i_12])) <= (((/* implicit */int) (_Bool)0))))))))))));
                        var_32 |= ((/* implicit */unsigned int) arr_27 [i_12]);
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 2) 
    {
        var_33 = ((/* implicit */unsigned short) ((unsigned int) min((arr_44 [i_14]), (arr_44 [i_14]))));
        var_34 = ((/* implicit */unsigned int) min((var_34), (4294967287U)));
        var_35 = ((/* implicit */long long int) arr_46 [i_14]);
        var_36 = ((((/* implicit */int) var_0)) << (((((unsigned int) var_7)) - (22555U))));
    }
}
