/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6713
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
    var_16 += ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-12861)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12854))) - (var_1)))))) : (var_12)));
    var_17 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((int) (unsigned short)23726))) >= (6037042689276832748LL))))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) % (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_8)) : (var_0)))))));
    var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned int) var_8)) < (((((/* implicit */_Bool) var_1)) ? ((-(var_12))) : (var_9)))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-12877)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_0))) - (arr_0 [i_0] [i_0])))) || (((/* implicit */_Bool) var_7))));
        var_19 -= ((/* implicit */unsigned int) (!(max((arr_1 [i_0]), (arr_1 [i_0])))));
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                {
                    {
                        var_20 += ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_13))) ? (((((/* implicit */_Bool) arr_6 [i_0 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20251))) : (var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))));
                        arr_10 [i_0 - 3] [i_1] [(short)2] [i_2] [(short)2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0 + 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) 6662284268906987480LL))))))))));
                    }
                } 
            } 
            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (~(max((arr_5 [i_0 + 1] [i_1] [i_0 - 1]), (arr_5 [i_0] [i_1] [i_0 - 2]))))))));
        }
        for (unsigned short i_4 = 1; i_4 < 22; i_4 += 1) 
        {
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (-6662284268906987498LL) : (-6662284268906987480LL)))) ? (((/* implicit */int) arr_6 [i_4 - 1])) : (((var_8) ^ (((/* implicit */int) var_2))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_7 [i_0] [i_0])))) : (var_6)));
            /* LoopNest 2 */
            for (unsigned int i_5 = 0; i_5 < 23; i_5 += 4) 
            {
                for (unsigned long long int i_6 = 2; i_6 < 21; i_6 += 1) 
                {
                    {
                        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned int) (short)-17553)), (3741394815U)))))) ? ((-(arr_16 [18ULL] [i_4]))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_4 [i_4 - 1] [i_4 - 1] [i_4 - 1])), ((-(4282480697U))))))));
                        var_24 *= ((/* implicit */unsigned short) ((int) (short)12854));
                        var_25 = ((/* implicit */unsigned long long int) arr_14 [i_4 + 1] [i_4 + 1] [i_5]);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 20; i_7 += 1) 
            {
                for (unsigned short i_8 = 0; i_8 < 23; i_8 += 3) 
                {
                    {
                        arr_24 [i_8] [i_4] [i_7] [i_8] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0])) ? (((arr_0 [i_0] [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_8]))))) : (arr_0 [i_7 - 1] [i_7 - 1]))) | (((/* implicit */unsigned long long int) var_8))));
                        arr_25 [i_7] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_8 [i_7 + 3] [i_7 + 3] [i_4 + 1]), (((/* implicit */int) arr_18 [17LL] [i_8] [i_4 - 1] [i_8] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((max((((/* implicit */int) arr_6 [i_0])), (var_8))) < (((/* implicit */int) var_14)))))) : (max((((/* implicit */long long int) arr_4 [i_4] [i_7] [i_8])), (max((var_4), (((/* implicit */long long int) arr_23 [i_0 - 2] [i_4] [i_7 + 2]))))))));
                        arr_26 [i_8] [i_8] [i_8] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_16 [i_0] [(short)3])) ? (14171316622399426014ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0 - 2] [i_0 - 1]))))) << (((/* implicit */int) ((arr_5 [i_7] [i_7 + 3] [i_7 + 1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 23; i_9 += 1) 
        {
            var_26 = ((/* implicit */int) min((var_26), (((((/* implicit */_Bool) arr_8 [i_0] [i_0 + 1] [i_9])) ? (arr_8 [i_0 + 2] [i_9] [(signed char)19]) : (arr_22 [i_0 + 2] [i_9] [i_0 - 1] [i_9] [i_0])))));
            var_27 = ((/* implicit */long long int) max((var_27), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_9] [i_9] [i_0 + 1]))))) ? (((-3286324050005059808LL) & (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_9] [i_9] [(unsigned short)19]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_9] [i_0])))))));
        }
        for (long long int i_10 = 0; i_10 < 23; i_10 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_11 = 0; i_11 < 23; i_11 += 2) 
            {
                for (short i_12 = 1; i_12 < 22; i_12 += 3) 
                {
                    {
                        var_28 = ((/* implicit */signed char) var_1);
                        arr_38 [i_12] [i_11] [i_10] [i_12] = ((/* implicit */short) 2641992672U);
                    }
                } 
            } 
            arr_39 [i_10] = ((/* implicit */unsigned int) arr_35 [i_0 - 3] [i_0] [i_10] [i_10]);
            arr_40 [i_0 + 3] [i_0 - 4] [i_0 + 3] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_10] [i_0]))))) ? (((/* implicit */long long int) ((4282480675U) % (12486611U)))) : (3469740713499392552LL))), (((/* implicit */long long int) (short)-26935))));
            var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 1]))) * (4132872892U))))));
        }
        /* LoopNest 3 */
        for (unsigned long long int i_13 = 0; i_13 < 23; i_13 += 3) 
        {
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                for (short i_15 = 1; i_15 < 19; i_15 += 4) 
                {
                    {
                        var_30 = ((/* implicit */unsigned short) ((_Bool) (+(max((((/* implicit */unsigned long long int) var_8)), (arr_0 [i_15 + 3] [i_15 - 1]))))));
                        var_31 = ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_0 - 4] [i_0 - 4] [13U] [i_15])) ? (((/* implicit */long long int) ((((/* implicit */int) max(((short)-12854), ((short)2548)))) >> (((((((/* implicit */int) var_15)) << (((((/* implicit */int) arr_6 [(unsigned short)4])) - (6332))))) - (1048554)))))) : (((((/* implicit */long long int) ((/* implicit */int) max((arr_20 [i_14] [i_14] [i_14]), (((/* implicit */unsigned short) var_2)))))) | (var_4)))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_16 = 0; i_16 < 23; i_16 += 3) 
        {
            for (short i_17 = 0; i_17 < 23; i_17 += 4) 
            {
                {
                    arr_56 [0U] [i_16] [i_16] [i_16] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(2034058318477892811LL))))));
                    arr_57 [i_16] [i_16] = ((/* implicit */signed char) max((max((arr_44 [i_17] [i_16]), (((/* implicit */unsigned long long int) (short)-30811)))), ((+(((((/* implicit */_Bool) arr_36 [i_0] [i_16] [13ULL] [i_0] [i_17])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 - 3] [i_0] [i_0]))) : (var_7)))))));
                    arr_58 [i_16] [i_16] [i_16] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)34209)), (3901517842065824227LL)))) && (((/* implicit */_Bool) (short)-24110)))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-30809)) ? (((/* implicit */int) arr_37 [12ULL])) : (((/* implicit */int) arr_50 [i_16] [i_16])))))))));
                    var_32 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) -767057965080664012LL)) || (((/* implicit */_Bool) arr_51 [i_0 + 3] [i_0 + 2])))), (((var_1) == (((/* implicit */unsigned long long int) var_8))))));
                    var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) var_11))) ? (((((/* implicit */int) arr_27 [i_16] [i_0 - 3] [i_17])) << (((/* implicit */int) arr_27 [i_0 - 1] [i_0 - 2] [i_17])))) : (((arr_27 [i_0] [i_0 + 2] [i_17]) ? (((/* implicit */int) arr_27 [i_0] [i_0 - 2] [i_17])) : (((/* implicit */int) arr_27 [i_0 + 3] [i_0 + 2] [i_17]))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_18 = 0; i_18 < 10; i_18 += 3) 
    {
        var_34 = ((/* implicit */short) arr_34 [18] [4LL] [(_Bool)1]);
        arr_62 [i_18] = ((/* implicit */unsigned int) var_13);
        arr_63 [5] [i_18] = ((/* implicit */unsigned long long int) arr_46 [i_18]);
    }
    /* vectorizable */
    for (short i_19 = 1; i_19 < 14; i_19 += 4) 
    {
        var_35 |= ((/* implicit */unsigned long long int) ((int) arr_28 [i_19]));
        /* LoopNest 2 */
        for (unsigned int i_20 = 0; i_20 < 17; i_20 += 1) 
        {
            for (unsigned short i_21 = 1; i_21 < 15; i_21 += 4) 
            {
                {
                    arr_74 [i_19] [i_20] [i_20] = ((/* implicit */short) ((arr_16 [i_19 - 1] [i_19 + 3]) >> ((((-(((/* implicit */int) arr_20 [i_19] [i_20] [i_21])))) + (11427)))));
                    arr_75 [i_19] = ((/* implicit */long long int) ((unsigned long long int) (-(((/* implicit */int) (_Bool)0)))));
                    var_36 = ((/* implicit */long long int) arr_7 [i_19 + 1] [i_19 + 1]);
                }
            } 
        } 
    }
    var_37 = ((/* implicit */unsigned short) var_12);
}
