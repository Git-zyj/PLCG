/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68343
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)31)) ? (min((14097866753896221306ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)31)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 4; i_2 < 20; i_2 += 1) 
            {
                for (unsigned short i_3 = 4; i_3 < 20; i_3 += 4) 
                {
                    {
                        arr_9 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)31)) && ((_Bool)1))))) : ((((_Bool)0) ? (5401392766183092984LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3])))))));
                        var_20 = ((/* implicit */short) -369164580);
                        var_21 = ((/* implicit */long long int) ((((/* implicit */int) arr_6 [(_Bool)1] [18])) == (arr_1 [i_0])));
                        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_6 [(_Bool)1] [i_1]) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)1))))) || (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (3919092354U)))));
                        arr_10 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 13826951283309176883ULL)) ? (((/* implicit */int) arr_3 [(signed char)8] [i_0] [i_0 + 1])) : (((/* implicit */int) arr_3 [i_3 + 1] [i_0] [i_0 - 1]))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)58)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (signed char)-85)) : (((((/* implicit */_Bool) -51279048)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)85))))));
        var_24 = ((/* implicit */unsigned int) (short)-2700);
    }
    for (unsigned int i_4 = 2; i_4 < 10; i_4 += 1) 
    {
        var_25 = ((/* implicit */long long int) arr_1 [(unsigned char)4]);
        /* LoopNest 3 */
        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 1) 
        {
            for (unsigned int i_6 = 0; i_6 < 12; i_6 += 2) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 1) 
                {
                    {
                        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)0)), (min((((/* implicit */signed char) arr_18 [i_4 + 2] [i_4 + 2])), ((signed char)72)))))) ? ((((+(arr_2 [i_4]))) - ((-(((/* implicit */int) arr_12 [10U])))))) : (((/* implicit */int) ((((/* implicit */_Bool) 8806253342283810446ULL)) || (((/* implicit */_Bool) -5260553953455340513LL))))))))));
                        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_7 [i_6])) > (((/* implicit */int) arr_7 [i_6]))))) < (((/* implicit */int) arr_7 [i_6])))))));
                        var_28 = arr_11 [i_4 + 2];
                        var_29 *= ((/* implicit */short) ((((/* implicit */long long int) (~(((((/* implicit */int) (unsigned char)30)) & (((/* implicit */int) (unsigned char)255))))))) ^ (((((/* implicit */_Bool) ((arr_2 [i_7]) ^ (((/* implicit */int) (unsigned char)40))))) ? (arr_5 [i_6] [i_5] [8] [(signed char)2]) : (((/* implicit */long long int) ((((((/* implicit */int) (signed char)-85)) + (2147483647))) >> (((15528122406331234981ULL) - (15528122406331234952ULL))))))))));
                    }
                } 
            } 
        } 
        var_30 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-111)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (9223372036854775807LL)))) ? (((/* implicit */int) (signed char)-81)) : (max((-2050471514), (((/* implicit */int) (unsigned char)0))))))));
        var_31 = ((/* implicit */unsigned char) (~((~(((((/* implicit */_Bool) arr_1 [18LL])) ? (((/* implicit */int) arr_4 [i_4])) : (((/* implicit */int) (short)0))))))));
    }
    for (unsigned char i_8 = 4; i_8 < 18; i_8 += 1) 
    {
        arr_25 [13ULL] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)63))))) ? (((/* implicit */int) (unsigned char)113)) : (((/* implicit */int) arr_6 [i_8 - 2] [i_8 - 2]))))) : ((-9223372036854775807LL - 1LL))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_9 = 1; i_9 < 20; i_9 += 1) 
        {
            arr_30 [i_8] [i_9] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)110))) / (arr_5 [(_Bool)1] [(unsigned short)4] [i_8] [12])));
            var_32 = (+(((/* implicit */int) (unsigned short)40950)));
            var_33 += ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_8] [i_8])) | (((/* implicit */int) (unsigned char)30)))))));
            arr_31 [i_9] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [18LL]))));
            var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) ((arr_22 [i_8 + 1] [i_8 - 4]) <= (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-63)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))))));
        }
    }
}
