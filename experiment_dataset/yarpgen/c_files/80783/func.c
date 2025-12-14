/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80783
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
    var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) > (((((/* implicit */_Bool) (short)15239)) ? (((/* implicit */unsigned long long int) var_3)) : (12477061437162458353ULL)))))), (((((/* implicit */int) (unsigned char)147)) - (((/* implicit */int) var_1)))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_3 [i_0] = max((((/* implicit */unsigned long long int) ((unsigned short) arr_1 [i_0] [i_0]))), (max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) >= (arr_0 [i_0])))), (arr_0 [i_0]))));
        arr_4 [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))))) < (15082480223200425329ULL)));
        var_12 = ((/* implicit */_Bool) (unsigned short)25955);
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (!(((((/* implicit */_Bool) (unsigned char)128)) || (((/* implicit */_Bool) arr_0 [i_0])))))))));
    }
    for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 3; i_2 < 20; i_2 += 2) 
        {
            var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(7229638166462711421LL)))) | ((-(16197581461259001636ULL))))))));
            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32754)) ? (arr_8 [i_2 - 3] [i_2 - 2]) : (arr_8 [i_2] [i_2 - 1])))) ? (((((/* implicit */_Bool) min((arr_6 [i_1]), (arr_8 [i_1] [i_1])))) ? (arr_7 [i_2 - 2]) : (arr_6 [i_1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) max(((unsigned short)34610), (var_7)))) - (((/* implicit */int) (unsigned short)59110)))))));
            var_16 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) var_9)), ((short)32767)))))))));
            arr_9 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 5032402750998444940ULL)))))) & (((((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_8 [i_1] [i_2 + 3]))) - (((/* implicit */unsigned long long int) arr_5 [i_2 + 2] [i_2 - 3]))))));
            arr_10 [i_1] [i_2] = ((/* implicit */_Bool) arr_7 [i_1]);
        }
        for (unsigned char i_3 = 2; i_3 < 22; i_3 += 4) 
        {
            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)19))) & (3364263850509126287ULL)))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)131)) : (((/* implicit */int) (unsigned char)127)))) : (((/* implicit */int) ((arr_8 [i_3 + 1] [i_3 - 1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [i_1]))))))));
            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (short)15230))));
            /* LoopNest 2 */
            for (unsigned short i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                for (long long int i_5 = 0; i_5 < 23; i_5 += 4) 
                {
                    {
                        var_19 &= ((/* implicit */_Bool) min((8062327887868878798ULL), (((((/* implicit */_Bool) (unsigned short)4125)) ? (arr_14 [i_5] [i_3 + 1] [i_4] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        arr_18 [i_1] [i_5] |= ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_14 [i_5] [i_5] [8LL] [i_5]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3] [(unsigned short)22]))))))) != (((var_5) ? (arr_8 [i_1] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_1] [i_3] [(short)14] [i_5]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) ((arr_16 [i_1] [i_1]) >= (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_1] [i_1])))))), (arr_11 [i_3 - 1] [i_3 + 1] [i_4]))))) : (((unsigned long long int) (unsigned char)131))));
                    }
                } 
            } 
            var_20 ^= ((/* implicit */unsigned char) max((((144115153716117504ULL) * (((/* implicit */unsigned long long int) -3424038451382540840LL)))), (((/* implicit */unsigned long long int) ((signed char) arr_13 [i_1] [(unsigned short)15] [i_1])))));
        }
        var_21 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */unsigned long long int) (-(arr_16 [i_1] [i_1])))) / (arr_14 [i_1] [i_1] [i_1] [i_1]))));
    }
    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 1) 
    {
        var_22 ^= ((/* implicit */_Bool) ((unsigned short) (-(((16155488569118710290ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48565))))))));
        var_23 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((unsigned char) arr_16 [i_6] [i_6]))), (max((arr_20 [i_6] [i_6]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_6] [i_6] [i_6])) ? (((/* implicit */int) (short)15209)) : (((/* implicit */int) (unsigned char)123)))))))));
        /* LoopSeq 2 */
        for (long long int i_7 = 1; i_7 < 15; i_7 += 4) 
        {
            var_24 = ((/* implicit */long long int) ((unsigned short) arr_13 [i_7 - 1] [i_7 + 1] [i_7 + 1]));
            arr_23 [i_6] [i_7] [i_7 + 1] = ((/* implicit */unsigned short) (signed char)-123);
        }
        for (unsigned short i_8 = 1; i_8 < 18; i_8 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned short i_9 = 0; i_9 < 19; i_9 += 1) 
            {
                for (unsigned short i_10 = 0; i_10 < 19; i_10 += 4) 
                {
                    for (unsigned long long int i_11 = 1; i_11 < 18; i_11 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))))) ? (min((((((/* implicit */unsigned long long int) -4954723627992116256LL)) % (arr_15 [(unsigned char)8] [(unsigned char)8] [(unsigned char)8] [i_6] [i_11 + 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) != (((/* implicit */int) arr_25 [i_6]))))))) : ((+(arr_15 [i_6] [i_6] [7U] [i_6] [i_6])))));
                            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) min((max((arr_15 [i_8 - 1] [i_8] [i_8 + 1] [i_10] [i_8 - 1]), (arr_15 [i_8 - 1] [i_8] [i_8 + 1] [i_10] [i_8 - 1]))), (((/* implicit */unsigned long long int) arr_29 [8U] [i_8 + 1] [i_9] [i_10])))))));
                            var_27 = ((/* implicit */signed char) arr_6 [i_8]);
                            arr_37 [(signed char)16] [i_10] [(_Bool)1] [(_Bool)1] [i_10] |= ((/* implicit */unsigned short) 800539825);
                        }
                    } 
                } 
            } 
            arr_38 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) ((arr_16 [i_6] [i_8]) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))), (arr_28 [i_6] [i_6] [i_8 - 1] [i_8]))))) / (((long long int) arr_20 [i_6] [i_8 + 1]))));
        }
    }
    var_28 = (!(var_5));
    var_29 = ((/* implicit */_Bool) var_10);
}
