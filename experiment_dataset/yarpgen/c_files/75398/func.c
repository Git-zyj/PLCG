/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75398
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
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 2) /* same iter space */
    {
        var_10 -= ((unsigned int) (!(((/* implicit */_Bool) (unsigned short)31))));
        var_11 -= ((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(1998635619U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((short)-837), (((/* implicit */short) (_Bool)0)))))) : (((4294967277U) | (1938388483U)))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            var_12 = ((/* implicit */unsigned int) ((((((/* implicit */int) ((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) 4294967288U))))) & (((/* implicit */int) ((((/* implicit */_Bool) 1621796970U)) || (((/* implicit */_Bool) 1467993033U))))))) * (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)-32765))) / (var_5))) < (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) | (((/* implicit */int) var_1))))))))));
            var_13 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_2)))) ? ((~(((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) 3434055416U)) : (1347609746014901318ULL))))) : (((((/* implicit */unsigned long long int) (+(4294967288U)))) * (var_4)))));
            var_14 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) ^ (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)23072)) ? (1648120490U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-31782)))))), (((((/* implicit */_Bool) (unsigned short)23072)) ? (7367835971065522278ULL) : (0ULL)))))));
        }
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    {
                        var_15 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((unsigned short) 205151888U))) ? ((~(((/* implicit */int) (short)19965)))) : (((/* implicit */int) var_1))))));
                        var_16 = (+(((unsigned long long int) (-(3336853787U)))));
                        var_17 = ((/* implicit */short) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)836))) : (var_2))), (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (min((16233619870096984246ULL), (0ULL))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42464))) % (var_2)))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_5 = 1; i_5 < 7; i_5 += 2) 
        {
            var_18 &= ((/* implicit */unsigned short) (-(((/* implicit */int) var_3))));
            var_19 = ((/* implicit */unsigned int) min((var_19), (((unsigned int) 9657338397887363087ULL))));
            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((var_5) < (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 1; i_6 < 9; i_6 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (short i_7 = 0; i_7 < 10; i_7 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (short i_8 = 0; i_8 < 10; i_8 += 4) 
            {
                var_21 = ((/* implicit */_Bool) ((var_4) % (((/* implicit */unsigned long long int) 1159022011U))));
                /* LoopSeq 1 */
                for (unsigned int i_9 = 0; i_9 < 10; i_9 += 2) 
                {
                    arr_28 [i_6 - 1] [i_6] [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 8565681848009570746ULL)) ? (((/* implicit */int) (short)31965)) : (((/* implicit */int) (unsigned short)65509))));
                    arr_29 [(unsigned short)8] [i_7] [i_6] [i_9] = ((/* implicit */unsigned int) var_1);
                    var_22 = ((unsigned int) ((var_4) * (((/* implicit */unsigned long long int) var_0))));
                }
                arr_30 [i_6] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2673170310U)) ? (0ULL) : (((/* implicit */unsigned long long int) 0U))));
                var_23 &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) ^ (2705289024U)));
            }
            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (-(((/* implicit */int) var_1)))))));
            var_25 += ((unsigned long long int) (-(var_2)));
        }
        for (short i_10 = 0; i_10 < 10; i_10 += 1) /* same iter space */
        {
            var_26 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3375869991U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3794854001U))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16))) < (1116616256U))))));
            var_27 = ((/* implicit */short) ((7928516622518558834ULL) != (((/* implicit */unsigned long long int) var_0))));
            var_28 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_6))));
            /* LoopSeq 2 */
            for (short i_11 = 4; i_11 < 9; i_11 += 2) 
            {
                var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((940290880662447504ULL) | (((/* implicit */unsigned long long int) 1023U))))) && ((_Bool)1)));
                arr_35 [i_11] [i_6] [i_6 - 1] = ((/* implicit */unsigned int) ((18446744073709551615ULL) != (var_4)));
                var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)10821)))))));
                arr_36 [i_6] [i_10] [i_10] [i_6] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 4294967288U)) ? (var_8) : (1467993016U))) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-2725)))));
                var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) 2705289024U))))))))));
            }
            for (unsigned int i_12 = 0; i_12 < 10; i_12 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_13 = 3; i_13 < 9; i_13 += 4) 
                {
                    var_32 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)29877))));
                    var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) (+(((unsigned int) (short)28777)))))));
                    arr_42 [i_6 - 1] [i_10] [i_12] [i_6] = ((unsigned int) 17506453193047104098ULL);
                }
                var_34 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_6)))) != ((+(((/* implicit */int) (unsigned short)59309))))));
            }
            var_35 = ((3014219587U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27557))));
        }
        for (short i_14 = 0; i_14 < 10; i_14 += 1) /* same iter space */
        {
            arr_45 [i_6] [i_6] = (!(((/* implicit */_Bool) (unsigned short)13097)));
            /* LoopNest 2 */
            for (unsigned int i_15 = 0; i_15 < 10; i_15 += 4) 
            {
                for (unsigned int i_16 = 1; i_16 < 8; i_16 += 1) 
                {
                    {
                        var_36 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 11465955749429079220ULL)) ? (9881062225699980870ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61175))))) >= (17763552189157340153ULL)));
                        var_37 = ((/* implicit */unsigned int) (+(10523331163336904105ULL)));
                        var_38 *= ((/* implicit */unsigned int) ((5833400483619172137ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18237)))));
                        var_39 = 0U;
                        /* LoopSeq 1 */
                        for (unsigned long long int i_17 = 4; i_17 < 8; i_17 += 1) 
                        {
                            arr_54 [i_6] [i_6] [i_6] [i_15] [i_16] [i_16] [7U] = (~(18446744073709551593ULL));
                            arr_55 [(short)3] [2U] [i_6] [i_6] [i_14] [(short)3] = ((unsigned long long int) ((unsigned int) var_8));
                        }
                    }
                } 
            } 
            var_40 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2725))) ^ (7727035027502262099ULL)));
            var_41 &= ((/* implicit */short) (!(((/* implicit */_Bool) (~(18446744073709551613ULL))))));
            arr_56 [i_6] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)18597)) && (((/* implicit */_Bool) 4151258630890592533ULL)))))) * (((unsigned int) var_0))));
        }
        arr_57 [i_6] = ((/* implicit */unsigned int) var_1);
        /* LoopSeq 1 */
        for (short i_18 = 1; i_18 < 9; i_18 += 1) 
        {
            var_42 = 4294967295U;
            var_43 *= ((/* implicit */short) ((3506165629809616793ULL) - (((/* implicit */unsigned long long int) 1589678271U))));
        }
        var_44 &= ((/* implicit */short) ((((/* implicit */_Bool) (+(14940578443899934822ULL)))) ? (((/* implicit */int) (short)21408)) : (((((/* implicit */int) (short)0)) / (((/* implicit */int) (unsigned short)65535))))));
        var_45 = ((/* implicit */unsigned long long int) min((var_45), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) ((814703868907665844ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))))) : (((/* implicit */int) (short)-8145)))))));
    }
    for (unsigned long long int i_19 = 1; i_19 < 9; i_19 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_20 = 3; i_20 < 8; i_20 += 1) 
        {
            arr_65 [i_19] = ((/* implicit */_Bool) ((unsigned int) 1609474342U));
            var_46 += ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)16383))));
            var_47 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_4) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6460))))))) < (((((/* implicit */unsigned long long int) 239906993U)) * (14100494345662956503ULL)))));
        }
        /* vectorizable */
        for (unsigned long long int i_21 = 2; i_21 < 9; i_21 += 2) 
        {
            var_48 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)32768)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13370))) : (11517567983396233544ULL)));
            var_49 = ((/* implicit */unsigned int) min((var_49), (((/* implicit */unsigned int) ((unsigned long long int) ((var_5) | (3100789802U)))))));
        }
        arr_68 [(_Bool)1] |= (~(18446744073709551615ULL));
    }
    var_50 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)-6010)) ? (1659945103U) : (2486658135U)))))));
    var_51 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */int) (short)-3190)) % (((/* implicit */int) (unsigned short)6454)))), (((/* implicit */int) (unsigned short)64986))))) ? (104256516U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58627)))));
}
